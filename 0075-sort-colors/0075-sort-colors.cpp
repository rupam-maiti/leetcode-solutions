class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0;
        int high=n-1;
        int low=0;
        while( mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            
            }else{//nums[mid]==2
                swap(nums[high],nums[mid]);
                high--;
            }
        }
       
    }
};