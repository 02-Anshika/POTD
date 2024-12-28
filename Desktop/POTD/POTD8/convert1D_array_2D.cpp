class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      vector<vector<int>> array;
      vector<int> v;
      int size=original.size();
      int k=0;
       if(size!=m*n)
       return array; 
       
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              //array[i][j]=original[k];
              v.push_back(original[k]);

              k++;
            }
            array.push_back(v);
            v.clear();
        }
        return array;
    }
};
