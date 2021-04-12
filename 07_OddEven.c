// A C Program to check whether the entered number is Odd or Even.
// Ritika Koul 
#include <stdio.h> //Preprocessor directive to include standard input output header file
int main() {  // Start of Body
    int num; // Variable declaratation 
    printf("Enter an integer: ");
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
