/*Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)*/


#include <stdio.h>

int main()
{
    int size;
   printf("enter the size of array");
   scanf("%d",&size);
   int arr[size+1];
   for(int i=0;i<size;++i)
   {
       printf("Enter the element");
       scanf("%d",&arr[i]);
   }
        int n1,l1;
        printf("Enter the number to be inserted");
        scanf("%d",&n1);
        printf("Enter the loc of  number to be inserted");
        scanf("%d",&l1);
        for(int i=size;i>l1;--i)
        {
            arr[i]=arr[i-1];
        }
        arr[l1]=n1;
        for(int i=0;i<=size;++i)
        {
            printf("%d ",arr[i]);
        }
        
    return 0;
}