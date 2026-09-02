class Solution {
public:
bool searchinRow(vector<vector<int>>& mat, int target,int row){
    int n=mat[0].size();
    int st=0;
    int end=n-1;
    while(st<=end){
       int mid=st+(end-st)/2;
        if(target==mat[row][mid]){
            return true;
        }else if(target>=mat[row][mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int startingRow=0;
        int endingRow=m-1;
        while(startingRow<=endingRow){
          int midRow=startingRow+(endingRow-startingRow);
          if(target>=mat[midRow][0] && target<=mat[midRow][n-1]){
            return searchinRow(mat,target,midRow);
          }
          else if(target>mat[midRow][n-1]){
            startingRow=midRow+1;
          }else{
            endingRow=midRow-1;
          }
        }
        return false;
    }
};