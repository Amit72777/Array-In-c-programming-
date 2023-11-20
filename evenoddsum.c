#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int sumEven=0,sumOdd=0;

    for (int  i = 0; i < 10; i++)
    {
        if(i%2!=0) 
          
           sumEven+=a[i];    // sum of even index number 

        else 
            sumOdd+=a[i];    //  sum of odd index number 

    }


      printf(" the Difference of even index and odd index  %d  ",sumEven-sumOdd);
    
    
    return 0;
}