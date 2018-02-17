#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,c=0,n=0;
printf("\nEnter the sentence");
gets(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]=='.'||a[i]=='\n'||a[i]=='\t')
 {
   c++;
   if(a[i+1]!='\0')
   {
     ++n;
   }
  }
}
if(c==n)
{
printf("\n%d",c+1);
}
else
{
printf("\n%d",c);
}
return 0;
}
