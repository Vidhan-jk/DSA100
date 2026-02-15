#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter target:");
    scanf("%d",&target);
    int b,c;
    int k=0;
    for(int i=0;i<n;i++)
    {
      for(int j=1;j<n;j++)
      {
         if(a[i]+a[j]==target)
         {
             k=1;
             b=i;
             c=j;
             break;
         }
      }
     
    }
    if(k==1)
    printf("%d %d",c,b);
    else
    printf("-1 -1");
    
      
    
    return 0;
}