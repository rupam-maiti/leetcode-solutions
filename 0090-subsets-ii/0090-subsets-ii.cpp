class Solution {
public:
    void getSubset(vector<int>&nums,vector<int>ans,int i,vector<vector<int>>&allSubset){
        if(i==nums.size()){
        allSubset.push_back(ans);
        return;
        }
        ans.push_back(nums[i]);
        getSubset(nums,ans,i+1,allSubset);

        ans.pop_back();
        // to avoid duplicate
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1])
        idx++;
        getSubset(nums,ans,idx,allSubset);

    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>allSubset;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        getSubset(nums,ans,0,allSubset);
        return allSubset;
        
    }
};