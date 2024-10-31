#include<iostream>
using namespace std;
int main() {
    int n = 8;
    int prices[] = {7,1,5,4,3,6,9,2};
    int maxProfit = 0;
    // for (int i = 0;i < n - 1;i++) {
    //     for (int j = i + 1;j < n;j++) {
    //         int profit = prices[j] - prices[i];
    //         if(profit > maxProfit) maxProfit = profit;
    //     }
    // }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (prices[i] < prices[j] && prices[j] - prices[i] > maxProfit)
            {
                maxProfit = prices[j] - prices[i];
            }
        }
    }
    cout << maxProfit;

    return 0;
}