class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        int i = 0;
        int j;
        
        for(j = 1;j<=nums.size();j++){
            if(j == nums.size() || nums[j] != nums[j-1] + 1){
               
          
                if(nums[i] == nums[j-1]){
                    answer.push_back(to_string(nums[j-1]));
                }
                else{
                answer.push_back(to_string(nums[i]) + "->" + to_string(nums[j-1]));
                }
                i = j;
            }
        }
       return answer;
    }
};