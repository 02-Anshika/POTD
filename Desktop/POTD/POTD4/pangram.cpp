#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution{
   public:
     string pangram(string str){
          vector<int> arr(26,0);
        int n = str.length();
      for(int i =0; i<n; i++){
           int x = tolower(str[i] )-'a';
         arr[x]++;
      } 
      for(int i =0; i<26; i++){
          if(!arr[i])
            return "NO";
      } 
      return "YES";
    }
     
};
int main(){
    int n;
    cin>>n;
     string str;
    cin>>str;
    Solution s;
    cout<<s.pangram(str);
    return 0;
}
