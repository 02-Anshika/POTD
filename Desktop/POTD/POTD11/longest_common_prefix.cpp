class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        //just check first and last words ...and find upto which character array is sorted
        int m=strs.size(),n=strs[0].size();
        int i=0;
        while(i<n)
        {
            if(strs[0][i]==strs[m-1][i])
              ans=ans+strs[0][i];
            else
            break;
            i++;
        }
        return ans;
    }
};
