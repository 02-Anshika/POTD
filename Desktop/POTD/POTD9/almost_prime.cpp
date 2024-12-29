#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
     int count=0;
    for (int i = 2; i <= n; i++) {
        set<int> st; 
        int temp = i;

        for (int j = 2; j * j <= temp; j++) {
            if (temp % j == 0 && prime[j]) {
                st.insert(j);
                while (temp % j == 0) temp /= j; 
            }
        }
        if (temp > 1 && prime[temp]) {
            st.insert(temp);
        }
        if (st.size() == 2) {
            count++;
        }
    }
    cout<<count<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
