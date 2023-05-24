#include<stdio.h>    
int main()    
{    
 int n=0,i=1,c,d,no;
     
 printf("Enter the number= ");    
 scanf("%d",&no);    
 printf("\n%d %d",n,i); 
    
 for(d=2;i<no;d++) 
 {    
  c=n+i;    
  printf(" %d",c);    
  n=i;    
  i=c;    
 }  
    
 }    
