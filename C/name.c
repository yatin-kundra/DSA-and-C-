#include <stdio.h>
#include <conio.h>
int main()
{
    char name[15]; 
    //clrscr();           //why is it not displaying full name??
    printf("enter your name");
    scanf("%s",name);
    
    printf("%s",name);
}