#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
      
        for (int i=0;i<5;i++) //outer loop for number of rows(n) { for (int j=n-i; j>1; j--) //inner loop for spaces
            { 
                printf(" "); //print space
            }  
            for (int j=0;j<=i; j++ ) //inner loop for number of columns
            { 
                printf("*"); //print star
            } 
  
            printf("\n"); //ending line after each row
                     return 0;

        } 
    
   


