// This is my programmm
// its is complert prpgramm its pending  // for perform  row operation using

// additional feature
// Making by amit
#include <stdio.h> 
int main()
{

    int m = 1, c, d, e, f, g, n, x, y, z, row = 3, column = 4 ;

    printf("\n This Code is valid for 3 Equation\n");
    printf("Enter the element 3*4 matrix  :\n ");

    int a[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++) // for taking input
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrix is : \n");

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            printf("%d \t", a[i][j]); // for print matrix
        }
        printf("\n");
    }

    if (a[1][0] == 1)
    {
        for (int j = 0; j < column; j++)
        {
            int temp = a[1][j]; // for exchange  row  of matrix
            a[1][j] = a[0][j];
            a[0][j] = temp;
        }
    }
    else if (a[2][0] == 1)
    {

        for (int j = 0; j < column; j++)
        {
            int temp = a[2][j]; // for exchange  row  of matrix
            a[2][j] = a[0][j];
            a[0][j] = temp;
        }
    }

    if (a[0][0] == a[1][0])
    {
        for (int j = 0; j < column; j++)
        {
            a[1][j] = a[1][j] - a[0][j]; // perform 1 operation  row
        }
    }

    if (a[0][0] == a[2][0])
    {
        for (int j = 0; j < column; j++)
        {
            a[2][j] = a[2][j] - a[0][j]; // perform 2nd opeetaton in  row
        }
    }

    f = a[1][0];
    for (int j = 0; j < column; j++)
    {
        a[1][j] = a[0][0] * a[1][j] - f * a[0][j]; //  perform 3rd  ooperation
    }


    g = a[2][0];
    for (int j = 0; j < column; j++)
    {
        a[2][j] = a[0][0] * a[2][j] - g * a[0][j];  // perform 4th oopeation 
    }

    x = a[2][1];
    for (int j = 0; j < column; j++)
    {
        a[2][j] = a[1][1] * a[2][j] - x * a[1][j]; // perform 5th opetaion 
    }

    printf("Final matrix is :\n");

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            printf("%d \t", a[i][j]);   //print final matirx 
        }
        printf("\n");
    }

    printf(" \n");

    float x1, x2, x3, x4;

    x3 = a[2][3] / a[2][2];
    x2 = (a[1][3] - x3 * a[1][2]) / a[1][1];
    x1 = (a[0][3] - x2 * a[0][1] - x3 * a[0][2]) / a[0][0]; // Solve back substituiton

    printf(" \n x1 = %f , \n x2 = %f,\n x3 =  %f", x1, x2, x3);
    printf(" \nSolver by gauss elemination methon : ");

    return 0;
}
