class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int pro = 0;

        for(int i = 1; i < prices.size(); i++) {
            pro = max(pro, prices[i] - minn);
            minn = min(minn, prices[i]);
        }

        return pro;
    }
};
