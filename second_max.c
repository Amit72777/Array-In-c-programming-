/* We find the second maximum number in a array */

#include <stdio.h>
int main()
{
    //  two integer n for array size and a for bool type 
    int n,a;
    printf("Enter the size of array :-");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the element of array :- \n");

    // input the array size 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    // take a array in desending order 
    do
    {
        a = 1;

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                a++;
            }
        }

    } while (a !=1  );

    // print the 1 index element (with zero indexing )   which is second largest element 
    printf("the second maximum number is :- %d \n", arr[1]);


    return 0;
}










