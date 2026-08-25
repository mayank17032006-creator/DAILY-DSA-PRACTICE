class Solution {
    private:
    void solve(int index,int remaining,vector<int>&candidates,vector<int>&current,vector<vector<int>>&answer){
        if(remaining==0){
            answer.push_back(current);
            return;
        }
        if(index==candidates.size()|| remaining<0){
            return;
        }
        if(candidates[index]<=remaining){
            current.push_back(candidates[index]);
            solve(index,remaining-candidates[index],candidates,current,answer);
            current.pop_back();
        }
         solve(index+1,remaining,candidates,current,answer);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>answer;
        solve(0,target,candidates,current,answer);
        return answer;

    }
};