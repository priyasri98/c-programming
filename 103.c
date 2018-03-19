#include<stdio.h>
int main()
{
char a[50];
int i,j=i+1;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	if(i==0)
	{
		if(a[i]>97&&a[i]<122)
		a[i]=a[i]-32;
	}
if(a[i]==' '||a[i]=='.'||a[i]=='\n')
{
	if(a[i+1]>97&&a[i+1]<122)
	{
	a[i+1]=a[i+1]-32;
	}
}
}
puts(a);
return 0;
}
