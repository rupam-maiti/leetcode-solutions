class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
         if(end==0){
             return nums[0];
            }
        while(st<=end){
            int mid=st+(end-st)/2;
          
             if( mid==0 && nums[mid]!=nums[mid+1]) return nums[mid];
              //  return nums[mid];
            
            if(mid==end && nums[mid]!=nums[mid-1]) return nums[mid];
               // return nums[mid];
            
        
        //
            if( mid>0 && mid<end && nums[mid-1]!= nums[mid] && nums[mid+1]!=nums[mid]) return nums[mid];
                // return nums[mid];
            
            if(mid%2==0){
                if( mid>0 && nums[mid]==nums[mid-1]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }
            else{
                if( mid>0 && nums[mid]==nums[mid-1]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
            
        }
       return -1;
    }
};