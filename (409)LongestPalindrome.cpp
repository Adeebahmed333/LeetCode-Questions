class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        int cnt1=0;
        if(s.length()==1)
        {
            return 1;
        }
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;

        }
        for(auto i: m)
        {
            if(i.second % 2==1)
            {
                cnt1++;
            }
        }
        if(cnt1==0)
        {
            return s.length();
        }
        return (s.length()-cnt1)+1;
    }
};