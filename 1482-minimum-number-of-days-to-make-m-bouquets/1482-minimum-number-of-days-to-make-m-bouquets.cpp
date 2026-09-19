class Solution {
public:
    int makebouquet(vector<int>& bloomDay,int mid,int k){
        int count = 0;
        int bouquet = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            }
            else {
                count = 0;
            }
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size()){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long bundle = makebouquet(bloomDay,mid,k);
            if(bundle >= m){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;

            }
          

        }
        return ans;

    }
};