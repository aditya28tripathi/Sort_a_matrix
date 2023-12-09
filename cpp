class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int>v;
        
        int r = 0;
        int c=0;
        for(int r = 0;r<N;r++){
            for(int c = 0; c<N; c++){
                v.push_back(Mat[r][c]);
            }
        }
        
        sort(v.begin(),v.end());
        
        int k =0;
        for(int r =0; r<N; r++){
            for(int c = 0; c<N; c++){
                Mat[r][c]=v[k++];
            }
        }
        
        return Mat;
    }
};
