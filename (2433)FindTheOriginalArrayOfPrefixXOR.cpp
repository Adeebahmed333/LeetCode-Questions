vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> v(n);
        if(n==1)
        {
            v[0]=pref[0];
            return v;
        }
        v[0]=pref[0];

        for(int i=1;i<n;i++)
        {

          v[i]=pref[i-1] ^pref[i];
            
            
        }

        return v;

    }