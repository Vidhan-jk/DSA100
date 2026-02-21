#include <stdio.h>

int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main() 
{
    int n;
    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int total_sum = nums[0];
    int current_max = nums[0];
    int max_sum = nums[0];
    int current_min = nums[0];
    int min_sum = nums[0];

    for(int i = 1; i < n; i++) 
    {

        current_max = max(nums[i], current_max + nums[i]);
        max_sum = max(max_sum, current_max);

        current_min = min(nums[i], current_min + nums[i]);
        min_sum = min(min_sum, current_min);

        total_sum += nums[i];
    }

    if(max_sum < 0) {
        printf("%d\n", max_sum);
        return 0;
    }

    int circular_sum = total_sum - min_sum;

    printf("%d\n", max(max_sum, circular_sum));

    return 0;
}