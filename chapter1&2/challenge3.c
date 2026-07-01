#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");

    scanf("%f", &amount);
    printf("with tax added: %f", (amount*0.05)+amount);
}