#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50];
int i,c=0,t=0;
printf("\nEnter the first string");
gets(a);
printf("\nEnter the second string");
gets(b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
t++;
}
if(c>t)
{
printf("\n %s",a);
}
else if(t>c)
{
printf("\n %s",b);
}
else if(t==c)
{
printf("\n %s",b);
}
return 0;
}
