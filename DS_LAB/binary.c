#include <stdio.h>
int main()
{
int n,i,low,mid,high,found=0,key;
printf("Enter number of elements");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
 }
printf("Enter %d number of elements in sorted order:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter element for search:");
scanf("%d",&key);
low=0;
high=n=1;
while(low<=high)

{
mid=(low+high)/2;
if(arr[mid]==key)
{
 printf("Element %d found at the position %d ",key,mid+1);
 found=1;
 break;
 }
else if(arr[mid]<key)
{
low=mid+1;
}
else {
high=mid-1;
}
}
if(found==0)
{
printf("Element %d not found in the array",key);
}
return 0;
}

