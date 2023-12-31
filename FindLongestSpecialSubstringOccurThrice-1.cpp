class Solution {
public:
    //function to find the maximum of two substring length occuring thrice
    int max(int a,int b)
    {
        if(a>=b)
        {
            return a;
        }
        return b;
    }
    //main function
    int maximumLength(string s) {
        
        int n=s.length();//storing length of string in n
        int res=-1;//initialiseing result as -1 this variable will get return as result
        int cnt=0;//intialiseing count for counting the occurence of a perticular substring
        string substr="";//variable to store the substring which we are finding
         bool b=true;//variable to store wheather the s[i-1]==s[i] if same value is true else false
        for(int i=1;i<n;i++)//loop from 1st index to last index
        {
            if(b==false)
            {
            substr=s[i];//making the substr equal to the index
            }

                int found=s.find(substr);//using .find function to find wheather the substring exist in a string
                
                if(found!=string::npos)//execute if substr is found in the string .find function will return the index if the value is found else it returns string::npos
                {
                    cnt++;//increaseing the count if found
                  found=s.find(substr,found+1);//start finding from the next index where the substring is found at the first time
                    if(found!=string::npos)//if found then execute
                    {
                        cnt++;
                        found=s.find(substr,found+1);
                        if(found!=string::npos)//if found again then execute
                        {
                            cnt++;
                        }
                    }
                    
                }
            
            if(cnt>=3)//if count is greater then or equal to three so we can say that we have found the substring thrice in the string
            {
                res=max(res,substr.length());//taking the maximum of result and current length of a substring to find the longest sub string
            }
            cnt=0;//making count equal to zero again to start again from the next iteration
            if(s[i]==s[i-1])//if perevious character in the string is sama as the current the append the character again
            {
                substr+=s[i];
                b=true;//making b=true so that the substr will not get initialise again [NOTE:see the first if condition in the for loop]
            }
            else
            {
                b=false;//else making b=false so substr will get initialise again with a new character
            }
            
               
        }
        if(res==0)//if result is zero i.e we have not find any substring occuring thrice return -1
        {
            return -1;
        }
        
        return res;//returning result
        
    }
};