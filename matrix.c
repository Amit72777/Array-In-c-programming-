// its is complert prpgramm  pending  // for perform operation using
// additional feature

#include <stdio.h>

int main()
{

    int m = 1, c, d, e, f, g, n, z, row, column;
    float  x,y;
    char u;

    printf("Enter the row of matrx :");
    scanf("%d", &row);
    printf("Enter the Column of matrix :");
    scanf("%d", &column);

    printf("Enter the element :");

    int a[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    while (m == 1)
    {
        printf(" Use only row operation\n");

        printf(" \nif you interchange in row enter the  2 otherwise any number :");
        scanf("%d", &e);

        if (e == 2)
        {
            printf(" Enter the row of matrix who has to exchange the row ");
            scanf("%d%d", &d, &g);

            for (int j = 0; j < column; j++)
            {
                int temp = a[d - 1][j]; // for exchange  row  of matrix
                a[d - 1][j] = a[g - 1][j];
                a[g - 1][j] = temp;
            }

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    printf("%d \t", a[i][j]);  // print the matrix 
                }
                printf("\n");
            }
        }
        else
        {
            printf(" \nfor operation is  a[input row] = inputnum * a[ input row] inputsign(+or-) inputnum * a[intput row]\n");  // for print the operation 
            scanf("%d%f%d %c %f%d", &c, &x, &f, &u, &y, &z);
            printf("\n the operetiaon is  a[%d] =  %f * a[%d] %c  %f  * a[%d]\n", c, x, f,u, y, z);

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (i == c - 1 && u == '+')
                    {
                        a[c - 1][j] = x * a[f - 1][j] + y * a[z - 1][j];
                    }
                    if (i == c - 1 && u == '-')
                    {
                        a[c - 1][j] = x * a[f - 1][j] - y * a[z - 1][j];
                    }
                    printf("%d \t", a[i][j]);
                }
                printf("\n");
            }
        }

        printf(" \nif you continue the operation intput 1 otherwise any other number :");  // for continue for operation 
        scanf("%d", &m);
    }

    printf("Final matrix is :\n");

    for (int i = 0; i < row ; i++)
    {

        for (int j = 0; j < column ; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
