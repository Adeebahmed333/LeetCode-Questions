class Solution {
    private:
    int min(int a ,int b)
    {
        if(a>=b)
        {
            return b;
        }
        else
        {
            return a;
        }

    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        int minLen=INT_MAX;
        bool b=false;
        string result="";
        for(int i=0;i<n;i++)
        {
           minLen= min(minLen,strs[i].length());
        }

        for(int i=0;i<minLen;i++)
        {
            b=true;
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=strs[j-1][i])
                {
                    b=false;
                    break;
                }
            }
            if(b==true)
            {
                result+=strs[0][i];
            }
            else
            {
                break;
            }
        }
        return result;
    }
};