 //time complexity O(log(n))
 int findMin(vector<int>& nums) {
        int n=nums.size();

        int s=0,e=n-1,ans=nums[0];//Initialising ans as nums[0] so it will handle the case if array is not rotated

        while(s<=e)
        {
            int mid=e+(s-e)/2;
 //checking if left side is sorted
            if(nums[0]<=nums[mid])
            {
                s=mid+1;
            }
//checking if right side is sorted
            else
            {
            ans=nums[mid];
            e=mid-1;
            }
        }



        return ans;//returning ans
        
    }