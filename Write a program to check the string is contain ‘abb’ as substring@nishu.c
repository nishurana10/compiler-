#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char s[100]; int i,n,flag=0;
char x,y,z;
clrscr();
printf("Nishu Rana\n2001330109016\n\n");
printf("Enter the string\n");
scanf("%s", &s);
n=strlen(s);
for(i=0;i<n-2;i++){
if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b')
flag=1;
}
if(flag==1)
printf("Yes string has abb as substring");
else
printf("no string doesnt have abb as substring");
getch();
} 
