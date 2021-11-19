#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
clrscr();
printf("\nNishu Rana\n2001330109016\n");
printf("Enter string : ");
scanf("%s",str);
if(str[0]=='/'&& (str[1]=='/' || str[1]=='*'))
printf("String is comment");
else
printf("String isn't comment");
getch();
}
