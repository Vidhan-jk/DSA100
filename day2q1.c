 //Delete an Element from an Array
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
   
        int l2;
        printf("Enter the loc at which number is to be deleted ");
        scanf("%d",&l2);
        for(int i=l2;i<size-1;++i)
        {
            arr[i]=arr[i+1];
        }
        for(int i=0;i<size-1;++i)
        {
            printf("%d ",arr[i]);
        }
        
    return 0;
}