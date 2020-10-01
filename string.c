#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int k,i;
printf("\n Enter the string");
gets(s);
printf("\n Enter the number\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
puts(s);
}
return 0;
}
