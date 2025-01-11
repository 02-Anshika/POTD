class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int n=piles.size();
        long long low=1,high=maxi,ans=0,k=INT_MAX;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
             for(int i=0;i<n;i++)
             {
                ans=ans+ceil(double(piles[i])/mid);
             }
             if(ans<=h)
             { 
                k=min(mid,k);
                high=mid-1;
             }
             else
             low=mid+1;
           ans=0;
        }
        return k;
    }
};
