#include<stdio.h>
int main()
{
int i,c=1;
char s[100];
printf("\nEnter the string");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
{
c++;
}
}
printf("%d",c);
return 0;
}
