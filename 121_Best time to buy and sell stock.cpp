/*
Best time to buy and sell stock
开始以为是一个贪心算法，后来看了网上的一个解法，很简单的遍历一遍数组即可，记录下遍历到当前的最小值，
最大利润即为之前的最大利润和当前值与当前最小值之间的差的最大值。具体代码如下：
*/
class Solution {
public:
int maxProfit(vector<int>& prices) {
if (prices.empty()) return 0;
int res = 0;
int minp = prices[0];
for (int i = 0; i < prices.size(); ++i) {
minp = min(minp, prices[i]);
res = max(res, prices[i] - minp);
}
return res;
}
};
