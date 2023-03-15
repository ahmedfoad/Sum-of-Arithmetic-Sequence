#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1, an, sumOfN;
    int n;
    printf("Please enter the initial number (a1) :");
    scanf("%f", &a1);
    printf("Please enter the last number (an) :");
    scanf("%f", &an);
    printf("Please enter (n) :");
    scanf("%d", &n);

    sumOfN = (a1 + an) * (n / 2.0);
    printf("The sum of Arithmetic Sequence is %.0f \n" , sumOfN);
    return 0;
}
