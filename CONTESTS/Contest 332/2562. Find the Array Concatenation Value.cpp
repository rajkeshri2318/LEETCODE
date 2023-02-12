class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long sum=0;
        long j=nums.size()-1;
        
        for(int i=0; i<=j; i++)
        {
            if(i==j)
            {
                sum= sum+ nums[i];
                break;
            }
            else{
            string x= to_string(nums[i]);
            string y= to_string(nums[j]);
            string z= x+y;
            int newval= stoi(z);
            sum= sum + newval;
            j--;
            }
        }
        return sum;
    }
};
