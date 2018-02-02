#include<stdio.h>
int main()
{
char n;
 int a,b;
printf("\n Enter the character");
scanf("%c",&n);
a=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
 b=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
if(a||b)
{
printf("\n the given character is vowel");
}
else
{
printf("\n The given character is  consonant");
}
return 0;
}
