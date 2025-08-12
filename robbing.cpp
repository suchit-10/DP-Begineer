class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> dp(n+1, 0);
        dp[0] = 0;           
        dp[1] = nums[0];

        for (int i = 2; i <= n; i++) {
            int robCurrent = nums[i-1] + dp[i-2]; 
            int skipCurrent = dp[i-1];           
            dp[i] = max(robCurrent, skipCurrent);
        }
        return dp[n];
    }
};
