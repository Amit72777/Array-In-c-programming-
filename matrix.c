// its is complert prpgramm its pending  // for perform operation using

// additional feature
#include <stdio.h>

int main()
{

    int m = 1, c, d, e, f, g, n, z, row, column;
    float  x,y;

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

        printf(" if you interchange in row enter the  2 otherwise any number :");
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
            printf(" for operation is  a[input row] = inputnum * a[ input row] + inputnum * a[intput row]\n");  // for print the operation 
            scanf("%d%f%d%f%d", &c, &x, &f, &y, &z);
            printf("\n the operetiaon is  a[%d] =  %f * a[%d] +  %f  * a[%d]\n", c, x, f, y, z);

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if ( i == c-1 )
                    {
                        a[c - 1][j] = x * a[f - 1][j] + y * a[z - 1][j];
                    }
                    printf("%d \t", a[i][j]);
                }
                printf("\n");
            }
        }

        printf(" if you continue the operation intput 1 otherwise any other number :");  // for continue for operation 
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

    float x1, x2, x3, x4;


            x3 = a[2][3] / a[2][2];
            x2 = (a[1][3] - x3 * a[1][2]) / a[1][1];
            x1 = (a[0][3] - x2 * a[0][1] - x3 * a[0][2]) / a[0][0];  // Solve back substituiton 

    printf(" \n x= %f , \n y= %f,\n %f", x1, x2, x3);

    return 0;
}