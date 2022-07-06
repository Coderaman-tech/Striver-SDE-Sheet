class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        
        vector<int>v;//row
         vector<int>v1;//column
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                v.push_back(i);
                v1.push_back(j);}
            }
        }
      for(int i=0;i<v1.size();i++){
          for(int j=0;j<m;j++)
              arr[j][v1[i]]=0;
      }
         for(int i=0;i<v.size();i++){
          for(int j=0;j<n;j++)
              arr[v[i]][j]=0;
      }
    }
};
