#include<stdio.h>
#define S 10
int main()
{
int a[S];
int i,j,N,t;
printf("\n Enter the number of elements u want");
scanf("%d",&N);
printf("\nEnter the elements");
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
for(j=0;j<(N-i-1);j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\nAscending order for the given array is");
for(i=0;i<N;i++)
{
printf("\n%d",a[i]);
}
return 0;
}
