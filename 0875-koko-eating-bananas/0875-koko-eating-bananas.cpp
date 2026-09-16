class Solution {
public:
    long long calculate(vector<int>& piles,long long mid){
        long long ans = 0;
        for(int i=0;i<piles.size();i++){
            ans = ans+(piles[i]+mid-1)/mid;

        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int answer = INT_MAX;
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            long long val = calculate(piles,mid);
            if(val<=h){
                answer = min(answer,mid);
                high = mid-1;
            }
            else{
                low = mid+1;
                }

        }
        return answer;
        
    }
};