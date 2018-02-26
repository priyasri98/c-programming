#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int k,i;
printf("Enter the string");
gets(s);
printf("\nEnter number of elements\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}


