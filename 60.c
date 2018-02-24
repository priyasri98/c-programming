#include<stdio.h>
int main()
{
int i,N,t1=0,t2=1,nt;
printf("\n Enter number of terms u want in series:");
scanf("%d",&N);
printf("\nFibonacci series\n");
for(i=1;i<=N;++i)
{
printf("%d\n",t2);
nt=t1+t2;
t1=t2;
t2=nt;
}
return 0;
}
