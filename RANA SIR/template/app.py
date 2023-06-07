from flask import Flask, request, render_template, send_file
import cv2
import numpy as np
import io

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('C:\Users\\avard\Desktop\YatinProject\index.html')

@app.route('/convert', methods=['POST'])
def convert():
    # read the uploaded file
    file = request.files.get('file')
    if not file:
        return 'No file uploaded', 400

    img_bytes = file.read()

    # convert the bytes to a numpy array
    nparr = np.frombuffer(img_bytes, np.uint8)

    # read the image from the numpy array
    img = cv2.imdecode(nparr, cv2.IMREAD_COLOR)

    # convert the image to grayscale
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    # convert the grayscale image to binary
    _, binary = cv2.threshold(gray, 128, 255, cv2.THRESH_BINARY)

    # save the binary image to a byte buffer
    buffer = io.BytesIO()
    cv2.imencode('.png', binary)[1].tofile(buffer)

    # return the byte buffer as a file download
    buffer.seek(0)
    return send_file(buffer, attachment_filename='binary.png', as_attachment=True)

if __name__ == '_main_':
    app.run(debug=True)