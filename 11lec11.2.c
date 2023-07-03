#include<stdio.h>

void main(){
int i,n; 
int a[n] ;
int *ptr;
int **ptr2;


printf("Enter the length of arry ");
scanf("%d",&n);
 
 printf("Enter arry elements \n");
 
 
 for(i=0;i<n;i++){
 	printf("a[%d]",i);
 	scanf("%d",&a[i]);
 }
 ptr = &a[n - 1];  
 ptr2 = &ptr;
  
   printf("Reversed array elements:\n");  
    for(i = 0; i < n; i++)  
        printf("%d\n", **ptr2--); 

}

