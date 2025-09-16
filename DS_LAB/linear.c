#include <stdio.h>
int main()
{
int n,i,key,found=0;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter %d number of elements:",n);
for(i=0;i<n;i++)
{

 scanf("%d",&arr[i]);
}
printf("Enter element for search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key){

printf("Element %d found at position %d",key,i+1);
found=1;
break;
}
}
if(arr[i]==0)
{
printf("Element %d is not found",key);
} 
return 0;
}

 
 
