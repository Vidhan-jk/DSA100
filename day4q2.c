#include <stdio.h>
int main()
{
    int n, val;
    int k = 0;
    printf("Enter size : ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter value to be removed: ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    printf("Number of elements not equal to %d: %d\n", val, k);

    printf("Array after removal (first %d elements):\n", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}