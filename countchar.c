#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i,c=0;
printf("\n Enter the string");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='z'))
{
c+=1;
}
}
printf("The number of characters u entered were %d",c);
return 0;
}
