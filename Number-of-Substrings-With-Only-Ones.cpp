class Solution {
public:
    int numSub(string s) {
         int mod=1e9+7;
        int n=s.length();
        vector<int> v;
        int consone=0;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='1')
          {
            consone++;
          }
          else
          {
              if(consone>0)
              {
                  v.emplace_back(consone);
                 
              }
               consone=0;
          }   
          
        }
        if(consone>0)
        {
            v.emplace_back(consone);
        }

        if(v.empty())
        {
            return 0;
        }
       int res=0;
        for(int i=0;i<v.size();i++)
        {
            int j=0;
             while(j<v[i])
             {
                 res=(res+v[i]-j)%mod;
                 j++;
             }
        }
        return res%mod;
    }
};