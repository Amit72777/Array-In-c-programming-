/*rotate the given array 'a' by k step , where k is non-nogative */
#include <stdio.h>
int reverse(int a[], int start, int end)
{
    

    for (int i = start, j = end; i <= j; i++, j--)
    {

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return 0;
}

int main()
{
    int n, k;

    printf("Enter the size of array :");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter the element of array :");

    for (int i = 0, j = n - 1; i < n || j >= 0; i++, j--)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the no of rotation : ");  // enter the no of rotaiton of element 
    scanf("%d", &k);

    if (k > n)
        k = k % n;
    reverse(arr1,0,n-1);  // we will reverse the array 
    reverse(arr1, 0, k - 1); //we will reverse  1st to k elemnt 
    reverse(arr1, k, n - 1); // we will reverse remaining element 

    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", arr1[i]);  // we will print the element of array 
    }

    return 0;
}