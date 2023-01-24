/*9. Write a C program to perform a binary search for a given key integer in a
single dimensional array of numbers in ascending order and report success or 
failure in the form of a suitable message. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], n, mid, l, h, i, key;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    printf("enter %d elements in Ascending order \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key element to search\n");
    scanf("%d", &key);
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            printf("The key if found at the position%d", mid + 1);
            exit(0);
        }
        if (key > a[mid])
            l = mid + 1;
        else
            h = mid - 1;
    }
    printf("The key is not found\n");
    return 0;
}