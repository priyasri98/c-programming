#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,nt;
printf("\n Enter number of terms u want in series:");
scanf("%d",&n);
printf("\nFibonacci series");
for(i=1;i<=n;++i)
{
printf("%d\n",t1);
nt=t1+t2;
t1=t2;
t2=nt;
}
return 0;
}
