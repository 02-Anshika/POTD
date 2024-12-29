#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0,ops=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(arr[i]);
    }
    bool flag=false;
    arr.push_back(1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        continue;
        if(arr[i]<0)
       {
        if(!flag)
          {ops++;
        flag=true;}
       }
        else 
        {
               flag=false;
        }
        
        
    }
    cout<<sum<<" "<<ops<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}