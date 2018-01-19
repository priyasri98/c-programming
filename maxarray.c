#include<stdio.h>
int main()
{
int a[50],N,i,m;
printf("\n enter the number of elements u want");
scanf("%d",&N);
printf("\n enter the elements");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<N;i++)
{
if(m<a[i])
m=a[i];
}
printf("\n maximum elements in the array is %d",m);
return 0;
}
