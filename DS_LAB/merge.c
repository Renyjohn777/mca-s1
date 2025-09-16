#include <stdio.h>
int main()
{
int size1,size2,i;
printf("Enter size of first array:");
scanf("%d",&size1);
int arr1[size1];
printf("Enter %d elements for first array:\n",size1);
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter size of second array:");
scanf("%d",&size2);
int arr2[size2];
printf("Enter %d elements for second array:\n",size2);
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
}
int size3=size1+size2;
int arr3[size3];
for(i=0;i<size3;i++)
{
  arr3[i]=arr1[i];
}
for(i=0;i<size2;i++)
{
arr3[size1+i]=arr2[i];
}
printf("Mearged array:");
for(i=0;i<size3;i++)
{
printf("%d",arr3[i]);
}
return 0;
}


