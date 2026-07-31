class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> prifix(n, 1);
        vector<int> suffix(n, 1);
        // prifix
        for (int i = 1; i < n; i++) {
            prifix[i] = prifix[i - 1] * nums[i - 1];
        }
        // suffix
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++) {
            ans[i] = prifix[i] * suffix[i];
        }
        return ans;
    }
};