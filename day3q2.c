/*You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter all integrs between 1-n except one :");
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=0;
    int missing;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]==i)
            {
                k=1;
                break;
            }
            
        }
        if(k!=1)
        {
        missing=i;
        break;
        }
        k=0;
    }
    printf("%d",missing);

    return 0;
}