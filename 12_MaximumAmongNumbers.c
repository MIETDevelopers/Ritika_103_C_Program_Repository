//Ritika Koul
#include <stdio.h>  //Preprocessor directive to include standard input output header file
#include <conio.h>  //Preprocessor directive to include console input output header file

int main()
{
  int i,num,n,large=0; // Variable declratation 

  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("How many numbers: ");
  scanf("%d",&n);  
  
  for(i=0; i<n; i++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.
  
  getch();
  return 0;
}

//It runs best in Windows Powershell.
