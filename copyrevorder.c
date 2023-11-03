#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr1[n],arr2[n]; 
    printf("Enter the element of array :");
    for(int i=0,j=n-1;i<n||j>=0;i++,j--)
    {
        scanf("%d",&arr1[i]);
        arr2[j]=arr1[i];
    }
    printf("the reverse odder of arry is :");

    for(int i=0;i<n;i++)
    {
        printf(" \n%d ",arr2[i]);
    }
    return 0;
}