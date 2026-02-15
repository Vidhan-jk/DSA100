#include <stdio.h>

int main() {

    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int prices[n];
    for(int i = 0; i < n; i++)
    {
        printf("Day %d price: ", i+1);
        scanf("%d", &prices[i]);
    }
    int min = prices[0];
    int profit = 0;        
    for(int i =1;i<n;i++)
    {
        if(prices[i]< min)
        {
            min = prices[i];  
        }
        int pprofit = prices[i] - min;
        if(pprofit>profit) 
        {
            profit = pprofit;  
        }
    }

    printf("Maximum Profit = %d\n", profit);

    return 0;
}