class Solution {
public:
    void getAllsubset(vector<int>&arr,vector<int>&ans,int i,  vector<vector<int>>&allSubset){
        if(i==arr.size()){
            allSubset.push_back({ans});
            return ;
        }
            ans.push_back(arr[i]);
            getAllsubset(arr,ans,i+1,allSubset);
            ans.pop_back();
            getAllsubset(arr,ans,i+1,allSubset);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubset;
        vector<int>ans;
        getAllsubset(nums,ans,0,allSubset);
        return allSubset;
        
    }
};