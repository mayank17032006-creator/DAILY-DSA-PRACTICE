class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for(auto it : nums){
            single = single^it;
        }
        return single;
    }
};