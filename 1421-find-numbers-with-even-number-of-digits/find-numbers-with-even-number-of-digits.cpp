class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++){
           long long int m=0;
            while(nums[i]>0){
                nums[i] = nums[i]/10;
                m =m+1;
            }
            if(m%2==0){
                count =count + 1;
            }
        }
        return count;
    }
};