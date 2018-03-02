#include<stdio.h>
int main()
{
char a[100]; 
int d,i,c=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
c=c+1;
}
d=c%2;
c=c/2;
for(i=0;a[i]!='\0';i++)
{
if(i==c&&d!=0)
{
a[i]='*';
}
else if(i==c)
{
a[i-1]='*';
a[i]='*';
}
}
puts(a);
return 0;
}
