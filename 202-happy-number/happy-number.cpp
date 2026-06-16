class Solution {
public:
    bool isHappy(int n) {
        bool ans =false;
        unordered_map<int,int> m;
      long long  int sum =0;
        while(sum!=1){
            while(n!=0){
                int ld =n%10;
                sum = sum + ld*ld;
                n = n/10;
            }
            if(sum == 1){
                return true;
                break;
            }
            else{
                n = sum;
            if(m.count(sum) == 0){
                m[sum] = 1;
            }
            else{return false;
                break;
                
            }
                sum =0;
            }
        }
        return ans;
    }
};