class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       // vector<int> answer;
        //vector<int> answer2;
        int n=nums.size();
         vector<int> answer(n,1);
       int prefix=1,sufix=1;
        for(int i=0;i<n;i++)
        {
            answer[i]=prefix;
            prefix=prefix*nums[i];
        }    
        for(int i=n-1;i>=0;i--)
        {
            answer[i]*=sufix;
            sufix*=nums[i];
        }
       
        return answer;
        }
};