#include<stdio.h> 

int main() 
{  
  int a[1000],n ,i; 
  printf("enter the size of the array:\n"); 
  scanf("%d" ,&n); 
  printf("enter the elements of the array:\n"); 

  for(i=0; i<n; i++) 
    scanf("%d" ,&a[i]); 
    
  if(n%2==1) 
    printf("middle element of array is : %d \n", a[n/2]); 
  else if(n%2==0) 
    printf("middle elements are : %d , %d ", a[n/2-1] ,a[n/2]); 
  return 0; 
}  