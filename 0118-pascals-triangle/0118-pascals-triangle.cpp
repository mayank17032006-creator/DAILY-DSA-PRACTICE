class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> answer;
       
        
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i+1);
            row[0] = 1;
           // row[i] = 1;
           
            for (int j = 0; j < i; j++) {
                row[j+1] = 1LL*row[j] * (i-j)/(j+1);
            }
            answer.push_back(row);
        }
        return answer;
    }
};