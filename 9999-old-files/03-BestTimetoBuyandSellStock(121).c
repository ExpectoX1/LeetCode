int maxProfit(int* prices, int pricesSize) {
    int n = pricesSize;
    int mini = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        int cost = prices[i] - mini;

        if (maxProfit > cost) {
            maxProfit = maxProfit;
        } else {
            maxProfit = cost;
        }

        if (mini < prices[i]) {
            mini = mini;
        } else {
            mini = prices[i];
        }
    }

    return maxProfit;
}
