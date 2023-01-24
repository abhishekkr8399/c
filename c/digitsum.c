#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, digit, rem, sum = 0, temp, count = 0;
    printf("Enter the Number\n");
    scanf("%d", &num);
    printf("Enter the digit to be find in the Number\n");
    scanf("%d", &digit);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
        if (rem == digit)
            count++;
    }
    printf("The Sum of all the digits of %d is %d\n", temp, sum);
    printf("The digit %d is occurred for %d times\n", digit, count);
    return 0;
}