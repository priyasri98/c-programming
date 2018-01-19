#include<stdio.h>
int main()
{
int a[50],N,i,m;
printf("\n Enter the number of elements you want");
scanf("%d",&N);
printf("\n Enter the elements");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<N;i++)
{
if(m>a[i])
m=a[i];
}
printf("\n minimum number in the array is %d",m);
return 0;
}
