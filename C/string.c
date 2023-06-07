#include <stdio.h>

int main()
{
                        //this should not work and rather print null instead of name.
    char *name;
    scanf("%s",name);
    printf("your name is %s",name);
    return 0;
}