int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size(),start=0;
        int end=n-1,ans=n;//initialiseing arr=n to handle if all the elements are already present

        while(start<=end)
        {
            int mid=end+(start-end)/2;
            if(arr[mid]-mid-1>=k)//to find the missing numbers and comparing it with K
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }

        return ans+k;
    }