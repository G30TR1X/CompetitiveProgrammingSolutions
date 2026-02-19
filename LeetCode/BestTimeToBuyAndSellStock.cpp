#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = 0;
    int sell = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        buy = (prices[i] < prices[buy]) ? i : buy;
        sell = (prices[i] > prices[sell]) ? i : sell;
    }

    if ((prices[sell] - prices[buy]) < 0)
    {
        return 0;
    }
    else return (prices[sell] - prices[buy]);
}

int main()
{
    vector<int> prices = {7,6,4,3,1}; 
    cout << maxProfit(prices) << endl;

    return 0;
}