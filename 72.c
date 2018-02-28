#include<stdio.h>
int main()
{
char s[100];
int i,p=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
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
