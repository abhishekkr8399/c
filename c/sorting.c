#include <stdio.h>
/*10.Write a C program to input N integer numbers into a single dimension 
array, sort them in to ascending order using selection sort technique, and then 
to print both the given array and the sorted array with suitable headings. */
#include <stdlib.h>
int main()
{
    int a[50], n, temp, i, j, pos;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Entered values are\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos])
                pos = j;
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
    printf("\nThe sorted values are\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}