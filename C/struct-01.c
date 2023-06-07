#include <stdio.h>
#include <string.h>
#include <stddef.h>
     typedef struct  phoneb         //phone is atructure name and data is variable.
    {
        /* data */
        char *name;
        char *number;
    }data;

int main()
{
  
            

    struct phoneb data[5] ;

    // data[0].name = "yatin";
    // data[0].number = "8128079211";

    // data[1].name = "krishnam";
    // data[1].number = "9501764375";
    
    // for(int i=0; i<2; i++)
    // {
    //     printf("%s\n",data[i].name);
    //     printf("%s\n",data[i].number);
    // }





    int len;

    for(int i=0, len = sizeof(data); i<len; i++ )
    {
        printf("Enter name: ");
        scanf("%s",data[i].name);
        printf("Enter phone number: ");
        scanf("%s",data[i].number);

    }

    for(int i=0, len = sizeof(data); i<len ; i++)
    {
        printf("%s\n%s",data[i].name,data[i].number);
    }


    
}