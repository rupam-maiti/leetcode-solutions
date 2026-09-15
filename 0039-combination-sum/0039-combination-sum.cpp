class Solution {
public:
    set<vector<int>> s;
    void Allcomb(vector<int>& arr, int i, vector<int>& comb,vector<vector<int>>& ans, int tar) {

        // base case--->
        int n = arr.size();
        if (i == n || tar < 0){
            return;
        }

        if (tar == 0) {
            if (s.find(comb) == s.end()) {
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        

        comb.push_back(arr[i]);
        Allcomb(arr, i + 1, comb, ans, tar - arr[i]); // single
        Allcomb(arr, i, comb, ans, tar - arr[i]);     // multiple
        comb.pop_back();
        Allcomb(arr, i + 1, comb, ans, tar); // exclusion
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        Allcomb(arr, 0, comb, ans, target);
        return ans;
    }
};