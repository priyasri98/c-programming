#include<stdio.h>
#include<stdlib.h>
int main()
{
int min;
printf("\nEnter the time in minutes");
scanf("%d",&min);
if((min/60)==1)
printf("%\n%d hour",min/60);
else
printf("\n%d hours",min/60);
if((min%60)==1)
printf("\n%d minutes\n",min%60);
else
printf("\n%d min\n",min%60);
return 0;
}
