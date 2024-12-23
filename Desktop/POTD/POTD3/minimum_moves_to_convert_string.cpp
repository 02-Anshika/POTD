class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int i =0,count=0;
        while(i<n){
             if(s[i]!='O'){
                  s[i]='O';
                  count++;
                  i=i+3;
             }
             else{
                i++;
             }
        }
        return count;
    }
};