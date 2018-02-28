#include<stdio.h>
int main()
{
char a[100];
int i,l,p=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=a[l-i-1])
{
p=1;
break;
}
}
if(p==1)
{
printf("\nNo");
}
else
{
printf("\nYes");
}
return 0;
}
