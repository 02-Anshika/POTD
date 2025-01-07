class solution{
public:
int findFloor(vector<int>& arr,int k){

        int floor=-1;
        for(int i=0;i<arr.size();i++)
          {
            if(arr[i]<=k)
              floor=i;
            else
              break;
          }
    return floor;
   }
}
