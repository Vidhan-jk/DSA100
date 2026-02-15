// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter the size of an array\n");
    scanf("%d", &n);
int arr1[n];
for(int i=0;i<n;i++)
{
    printf("elements %d=", i+1);
    scanf("%d", &arr1[i]);
}
int s;
    printf("enter the size of an array\n");
    scanf("%d", &s);
int arr2[s];
for(int i=0;i<s;i++)
{
    printf("elements %d=", i+1);
    scanf("%d", &arr2[i]);
}
int found=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<s;j++)
    {
        if(arr1[i]==arr2[j])
        {
    
            found=1;
            break;
        }
        else
        {
            found=0;
        }
    }
    if(found==1)
    {
        printf("%d ", arr1[i]);
    }
}
    return 0;
}