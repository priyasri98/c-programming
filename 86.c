#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,p=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(!(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
p=1;
break;
}
}
if(p==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
return 0;
}
