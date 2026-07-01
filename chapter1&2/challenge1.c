#include <stdio.h>

int main(void)
{
    int n =6;

    for (int i = 0 ; i<6 ;i++)
    {
        for (int j =0 ; j<n ; j++)
        {
            if(j==(n-1)){
                printf("*");
            }
            else if(i>2 && j==0){
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
        n--;
    }
}
// i tried a lot but after that i realized that the instruction just needs me to do it manually without using for 
// loop since the goal is to teach the effect of space and \n in the printf 
