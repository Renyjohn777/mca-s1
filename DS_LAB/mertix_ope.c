#include <stdio.h>
int main()
{
  int m,n,i,j,k;
  printf("Enter number of rows and columns of the metrices:");
  scanf("%d %d",&m,&n);
  int A[m][n],B[m][n],Sum[m][n],Mul[m][n],Sub[m][n];
  printf("Enter  elements of metrix A:");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
  scanf("%d",&A[i][j]);
  
    printf("Enter  elements of metrix B:");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
  scanf("%d",&B[i][j]);
  
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
Sum[i][j]=A[i][j]+B[i][j];

for(i=0;i<m;i++)
    for(j=0;j<n;j++)
Sub[i][j]=A[i][j]-B[i][j];

if(m==n)
{
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     Mul[i][j]=0;
     
     for(k=0;k<n;k++)
     {
            Mul[i][j]+=A[i][k]*B[i][k];
            }
            }
}
}


  
  
  
  
  
