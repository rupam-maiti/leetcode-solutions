class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        for(int val:nums){
            int freq=0;
            for(int elm:nums){
                
                if(val==elm){
                    freq++;
                }
            }
            if(freq>n/2){
                return val;
            }
        }
        return 0;
        
    }
    
};