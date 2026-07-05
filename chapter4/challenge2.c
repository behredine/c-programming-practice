/*extend the program in the challenge 1 one to handle three digit */
#include <stdio.h>


int main(void)
{
    int input ;
    printf("Enter a three-digit number: ");
    scanf("%d",&input);


    int first_digit = input/100;
    int second_digit = (input%100)/10;
    int third_digit = input %10;


    printf("The reversal is: %d%d%d\n",third_digit,second_digit ,first_digit);
}