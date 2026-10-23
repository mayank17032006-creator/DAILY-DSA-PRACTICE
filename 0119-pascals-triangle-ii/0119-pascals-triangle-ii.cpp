class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer;
        for(int i = 0;i<rowIndex+1;i++){
            vector<int>row(i+1);
            row[0] = 1;
            for(int j = 0;j<i;j++){
                row[j+1] = 1LL*row[j]*(i-j)/(j+1);
            }
            if(i == rowIndex){
                answer = row;
            }
        }
       return answer; 
    }
};