#include<stdio.h>
int main()
{
char a[20];
int i,f=0;
printf("\n Enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
{
f=f+1;
}
if(f==0)
printf("\nthere is no number in the string");
else
printf("\nstring contains number");
return 0;
}
