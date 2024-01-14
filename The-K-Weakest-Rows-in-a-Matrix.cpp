class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>> v;
        int c=0;
        for(int i=0;i<n;i++)
        {
           c=0;
            for(int j=0;j<m;j++)
            {
              if(mat[i][j]==1)
              {
                  c++;
              }

            }
            v.emplace_back(c,i);
        }
        sort(v.begin(),v.end());
    vector<int> res;
    for(int i=0;i<k;i++)
    {
        res.emplace_back(v[i].second);
    }
        return res;
        
    }
};