class Solution {
public:
    int totalMoney(int n) {
        int sum=0,cnt=0;

        if(n<=7)
        {
            return n*(n+1)/2;
        }
        int i=0,prevSum=0;
   while(n>=0)
   {
       if(n<7)
       {
           cnt=n+i;
            sum+=((cnt*(cnt+1))/2)-prevSum;
            break;

       }
       cnt=7+i;
    sum+=((cnt*(cnt+1))/2)-prevSum;
    i++;
    prevSum=(i*(i+1))/2;
    n-=7;

   }

   return sum;
        
        
    }
};