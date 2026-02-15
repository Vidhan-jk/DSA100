/*Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"*/
#include <stdio.h>

int main()
{
   int size;
   printf("enter the size of array");
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;++i)
   {
       printf("Enter the element");
       scanf("%d",&arr[i]);
   }
    
   int num;
   printf("Enter the number to be searched");
   scanf("%d",&num);
   int f=0;
   int c=0;
   for(int i=0;i<size;++i)
   {
       c++;
       if(arr[i]==num)
       {
       f=1;
       printf("Search sucessfull");
       printf("\nNumber of comparisons=%d",c);
       break;
       }
      
   }
   if(f!=1)
   {
       printf("Search unsucessfull");
   }
    return 0;
}