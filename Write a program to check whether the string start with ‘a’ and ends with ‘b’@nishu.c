#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char s[100]; int i,n;
clrscr();
printf("Nishu Rana\n2001330109016\n\n\nEnter the string:\n");
scanf("%s", &s);
n=strlen(s);
if((s[0]=='a') && (s[n-1]=='b'))
printf("Yes string starts with a and ends with b");
else
printf("No");
getch();
}
