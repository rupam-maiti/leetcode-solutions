class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>missing;
      int size=nums.size();
      int maxelement=nums[0];
      int minelement=nums[0];
      int expected=0;
      sort(nums.begin(),nums.end());
      for(int i=0;i<size;i++){
        maxelement= max(maxelement,nums[i]);
        minelement=min(minelement,nums[i]);
      }
      
        for(int val=minelement;val<=maxelement;val++){
             if(!binary_search(nums.begin(), nums.end(), val)) {
                missing.push_back(val);
          }
        }
        
        return missing;

    }
    
};