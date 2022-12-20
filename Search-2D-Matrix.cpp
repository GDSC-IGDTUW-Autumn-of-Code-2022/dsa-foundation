class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int start=0;
        int end = n*m -1;
        
        //base case
        if(matrix.size()==0) return false;
        
        while(start<=end) {
            int mid = start + (end-start)/2;        
            int curr = matrix[mid/m][mid%m];
            
            if(curr==target) {
                return true;
            }
            else if(curr<target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return false;
    }
};
