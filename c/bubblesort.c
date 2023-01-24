/*Write a C language, a Bubble sort program using function to sort given N
integers in ascending / descending order as per user’s preference. */
#include <stdio.h>
#include <stdlib.h>
void ascending(int a[50], int n);
void descending(int a[50], int n);
int main()
{
    int n, i, j, a[100], ch;
    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("enter the %d elements\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Your Choice\n");
    printf("1. Ascending order sorting\n 2. Descending order sorting\n");
    scanf("%d", &ch);
    if (ch == 1)
        ascending(a, n);
    else
        descending(a, n);
    printf("The sorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("Thank you\n");
    return 0;
}
void ascending(int a[30], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}
void descending(int a[30], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}