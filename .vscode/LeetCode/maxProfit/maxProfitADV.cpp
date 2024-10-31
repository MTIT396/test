#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int prices[] = {7, 1, 5, 7, 3, 6, 4};
    // buy and sell more times
    int buy = prices[0],maxProfit = 0;
    for (int i = 1;i < n;i++) {
        if(prices[i] < buy) {
            buy = prices[i];
        }
        else {
            maxProfit += prices[i] - buy;
            buy = prices[i];
        }
    }
    cout << maxProfit;
    return 0;
}
