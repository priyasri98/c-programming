#include<stdio.h>
#include<string.h>
void main()
{
char s[200];
int c=0,i;
printf("\nEnter the sentence");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='')
c++;
}
printf("Number of words in given sentence is %d\n",c+1);
}
