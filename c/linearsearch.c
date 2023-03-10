/*Write a C program to perform a linear search for a given key integer in a
single dimensional array of numbers and report success or failure in the form
of a suitable message using functions. */
#include <stdio.h>
#include <stdlib.h>
void linsearch(int a[100], int n, int key);
int main()
{
    int i, n, a[100], key;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key element to be searched\n");
    scanf("%d", &key);
    linsearch(a, n, key);
    return 0;
}
void linsearch(int a[100], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("The key element is found at position %d", i + 1);
            exit(0);
        }
    }
    printf("The Key element is not found in the list\n");
}