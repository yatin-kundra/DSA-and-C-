#include <stdio.h>

    struct phoneb
    {
        /* data */
        char *name;
        char *number;
    };

int main()
{


    phoneb data[];
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