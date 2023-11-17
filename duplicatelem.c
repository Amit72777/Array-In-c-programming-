/* */
#include <stdio.h>
int main()
{
    int dup = 0, a[10] = {3, 5, 2, 4, 6, 3, 4, 3,5,2,3};
    int c = 0, b[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        c = a[i];
        if (b[c] >= 1)
        {
            b[c]++;
        }
        else
            b[c] = 1;
    }

    for (int j = 1; j < 10; j++)
    {
        if (b[j] > 1)
            printf("\n %d is %d times in a array ", j, b[j]);
    }

    return 0;
}