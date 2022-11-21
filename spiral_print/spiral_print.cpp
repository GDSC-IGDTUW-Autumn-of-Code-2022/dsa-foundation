class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
        int count = 0;
        int total = rowsize*colsize;
        vector<int>ans;
        //getting indexes now 
        int startingrow= 0;
        int startingcol = 0;
        int endingrow = rowsize - 1;
        int endingcol = colsize - 1;
        while(count<total){
            for(int index = startingcol;count<total && index<=endingcol ; index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow ++;
            for(int index1=startingrow ;count<total && index1<=endingrow; index1++){
                ans.push_back(matrix[index1][endingcol]);
                count++;
            }
            endingcol--;
            //print ending column
            for(int index1= endingcol;count<total && index1>=startingcol; index1--){
                ans.push_back(matrix[endingrow][index1]);
                count++;
            }
            endingrow--;
            for(int index2 = endingrow;count <total && index2>=startingrow ; index2-- ){
                ans.push_back(matrix[index2][startingcol]);
                count++;
            }
            startingcol++;
        }

      return ans;  
    }

};
