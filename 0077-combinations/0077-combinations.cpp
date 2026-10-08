class Solution {
public:
    void combination(vector<vector<int>>& answer, vector<int>& temp, int begin,
                     int n, int k) {

        if (temp.size() == k) {
            answer.push_back(temp);
            return;
        }
        int i;
        for (i = begin; i <= n; i++) {
            temp.push_back(i);
            combination(answer, temp, i + 1, n, k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> answer;
        vector<int> temp;
        combination(answer, temp, 1, n, k);
        return answer;
    }
};