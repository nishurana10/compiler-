#include<stdio.h>
#include<conio.h>
void main(){
char s[100]; int i;
clrscr();
printf("Nishu Rana\n2001330109016\n\n\nEnter the string:\n");
scanf("%s", &s);
if((s[0]=='a') && (s[1]=='b'))
printf("Yes, string starts with ab");
else
printf("No, string doesnt start with ab");
getch();
}
