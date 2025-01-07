class Solution {
public:
    int arrangeCoins(int n) {
        long long i=1,total=0;
        while(i!=0)
        {
            total=(i*(i+1))/2;
            if(total>n)
            {
                 return i-1;
            }
            i++;
        }
        return -1;
    }
};
