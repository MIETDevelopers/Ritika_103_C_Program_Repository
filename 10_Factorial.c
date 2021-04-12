//A C Program to calculate Factorial of a number.
// Ritika Koul 
#include<stdio.h>  //Preprocessor directive to include standard input output header file
int main()    
{    
 int i,fact=1,number;    // Variable declratation 
 printf("Enter a number: ");    
  scanf("%d",&number);    //It will scan the number entered by user.
    for(i=1;i<=number;i++){    
      fact=fact*i;   //Logic 
  }    
  printf("Factorial of %d is: %d",number,fact);    //This will give us output.
return 0;  
}
// End of loop 
