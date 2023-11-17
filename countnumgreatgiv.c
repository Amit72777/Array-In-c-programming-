/* Count hte number of elemtne is given array greater than a given number x */
#include<stdio.h>
int main()
{
    int a[7] = { 3,54,7,83,4,3};
    int x=30 ,count=0;
    
    for (int  i = 0; i < 7 ; i++)
    {
        if(x<a[i]) count ++;

    }
    

    printf("   count the number is greater then x is =%d ",count );
    return 0;
}