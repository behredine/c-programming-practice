/* write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2010
The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. */

#include <stdio.h>

int main(void)
{
    int itemN;
    printf("Enter item number: ");
    scanf("%d",&itemN);

    float price;
    printf("Enter unit price: ");
    scanf("%f",&price);

    int month,date,year;
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month ,&date , &year);

    printf("Item\tunit\tpurchase\n");
    printf("    \tprice\tdate\n3.");
    printf("%d\t%4.2f\t%d/%d/%d\n",itemN,price ,month, date , year);

    
    
}