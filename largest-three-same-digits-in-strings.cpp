class Solution {
public:
    string largestGoodInteger(string num) {
      int n=num.length(),cnt=1;
      set<char> res;


      for(int i=1;i<n;i++)
      {
          char cur=num[i];
          if(cur==num[i-1])
          {
              cnt++;
              if(cnt>=3)
              {
                  res.insert(num[i]);
              }
          }
          else
          {
              cnt=1;
          }
      }
      if(res.empty())
      {
          return "";
      }

      string cm=to_string((*res.rbegin())-48);

      string s=cm+cm+cm;
   return s;
      
    }
};