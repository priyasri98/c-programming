#include<stdio.h>
int main()
{
char s[1000];
int i,f=0,c=0;
printf("\nEnter the string");
gets(s);
for(i=0;s[i]!=0;i++)
{
if(s[i]>='a'||s[i]<='z'||s[i]>='A'||s[i]<='Z')
{
f=1;
}
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
c=1;
}
}
if(f==1&&c==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
return 0;
}
