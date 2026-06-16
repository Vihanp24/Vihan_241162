class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        int k =-1;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;
        }
        for(int i=0;i<=nums.size();i++){
            if(!map.count(i)){
                k = i;
            }
        }
        return k;
    }
};