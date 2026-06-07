class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target) {
        int n = vec.size();
        vector<int> ans;
        int s =0;
        int e = n-1;
        while(s<=e){
            if(vec[s]+vec[e]==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            }
            else if((vec[s]+vec[e])>target){
                e--;
            }
             else if((vec[s]+vec[e])<target){
                s++;
            }
        }
    return ans;}
};