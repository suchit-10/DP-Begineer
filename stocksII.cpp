class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        //hill and vally'
        //ans+= hills - vally's
        for(int i = 1 ; i<prices.size() ; i++){
            if(prices[i] > prices[i-1]){
                ans+=prices[i] - prices[i-1];
            }
        }
        return ans;
    }
};