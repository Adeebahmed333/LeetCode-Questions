class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>diff(m,vector<int>(n,0));
        vector<int>zeroR(m,0);
        vector<int>zeroC(n,0);
        vector<int> oneR(m,0);
        vector<int> oneC(n,0);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    oneR[i]++;
                    oneC[j]++;
                }
                else
                {
                    zeroR[i]++;
                    zeroC[j]++;
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diff[i][j]=oneR[i] + oneC[j] - zeroR[i] -zeroC[j]; 
            }
        }

        return diff;


        
    }
};