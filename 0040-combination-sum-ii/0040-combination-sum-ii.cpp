class Solution {
    private:
        void solve(int index,int remaining,vector<int>&candidates,vector<int>&current,vector<vector<int>>&answer){
            if(remaining==0){
                answer.push_back(current);
                return;
            }
           for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>remaining){
                break;
            }
            current.push_back(candidates[i]);
            solve(i+1,remaining-candidates[i],candidates,current,answer);
            current.pop_back();
           }
        }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>current;
        int index;
        vector<vector<int>>answer;
        solve(0,target,candidates,current,answer);
        return answer;
    }
};