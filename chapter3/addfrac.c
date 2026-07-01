/* Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the
same time, separated by a plus sign:
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24 */

#include <stdio.h>

int main(void)
{
    int numer1, denom1 , numer2, denom2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&numer1,&denom1,&numer2,&denom2);
    
    // calculation
    int resultnumer= (numer1*denom2)+(numer2*denom1);
    int resultdenom = denom1*denom2;

    printf("The sum of the two fractions: %d/%d\n",resultnumer , resultdenom);
    
}