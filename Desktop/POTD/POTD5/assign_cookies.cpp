class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0,count=0;
        int n1=g.size(),n2=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n1 && j<n2)
        {  cout<<i<<j<<endl;
            if(g[i]<=s[j])
            { count++;
              i++;
              j++;
            }
            else
           { j++;
           }
        }
        return i;
    }
};
