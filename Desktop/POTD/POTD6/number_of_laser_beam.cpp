class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        int m=bank.size(),n=bank[0].size(),count;
        for(int i=0;i<m;i++)
        {  count=0;
            for(int j=0;j<n;j++)
            {
                if(bank[i][j]=='1')
                 count++;
            }
            if(count!=0)
            v.push_back(count);
        }
        if(v.size()<2)
        return 0;
        int pr=0;
        for(int i=0;i<v.size()-1;i++)
        {
            pr=pr+(v[i]*v[i+1]);
        }
    return pr;
    
    }
};
