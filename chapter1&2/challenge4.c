/*write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
 that amount using the smallest number of $20, $10, $5, and $1 bills:*/ 

 /* Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
integer values throughout, not floating-point numbers.*/

#include <stdio.h>

int main(void)
{
    int amount ;
    printf("Enter the dollar amount: ");
    scanf("%d", &amount);

    int count20 = amount/20;
    printf("$20 bills: %d\n", count20);

    int count10 = (amount - (count20*20))/10;
    printf("$10 bills: %d \n", count10);


    int count5 = (amount - (count20*20)-(count10*10))/5;
    printf("$5 bills: %d \n", count5);

    int count1 = (amount - (count20*20)-(count10*10)-(count5*5))/1;
    printf("$1 bills: %d\n", count1);

}

