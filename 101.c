#include<stdio.h>
int main()
{
int i,n,m,c=0;
char a[50];
gets(a);
scanf("%d",&n);
for(i=1;a[i]!='\0';i++)
{
c++;
}
m=c-n+1;
for(i=m;i<=c;i++)
{
printf("%c",a[i]);
}
return 0;
}
