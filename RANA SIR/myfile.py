import cv2
import matplotlib.pyplot as plt

im3 = cv2.imread(r"C:\Users\ykund\Desktop\uploads\WhatsApp Image 2022-12-22 at 4.17.05 PM.jpeg")
imgraycv2 = cv2.cvtColor(im3, cv2.COLOR_BGR2GRAY)
plt.imshow(imgraycv2, cmap='gray')
plt.show()