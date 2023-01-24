/*11.Write a C program to transpose a matrix of order M x N and find the trace 
of the resultant matrix. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, m, n, a[10][10], b[10][10], trace = 0;
    printf("Enter the size of the matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter %d x %d matrix\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("The entered matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            b[j][i] = a[i][j];
    printf("The transpose of the matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (m == n)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == j)
                    trace = trace + b[i][j];
            }
        }
        printf("The trace is %d\n", trace);
    }
    else
        printf(" cant perform trace because its not a square matrix\n");
    return 0;
}