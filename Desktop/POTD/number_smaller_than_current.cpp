class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> ans;
        int n=nums.size(),c;
        for(int i=0;i<n;i++)
        { c=0;
           
           for(int j=0;j<n;j++)
           { 
             if(nums[i]>nums[j])
             c++;
           }
           ans.push_back(c);
        }
        return ans;

        //sort(nums.begin(),nums.end());

    }
};

