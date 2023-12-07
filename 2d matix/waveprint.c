/*write a progarm to print the elemnt in wave form */
#include <stdio.h>
int main()
{
    int n, m, k;
    printf("Enter the row of matrix : ");
    scanf("%d", &m);
    printf("Enter the column of matrix :");
    scanf("%d", &n);

    int a[m][n];

    printf("Please input the matrix :");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("the matrix is :\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n the wave for is :\n");

    for (int i = 0; i < m; i++)
    {
        if ((i + 1) % 2 == 0)
            k = n - 1;
        else
            k = 0;

        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][k]);

            if ((i + 1) % 2 == 0)
                k--;
            else
                k++;
        }
    }
    return 0;
}