class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> last_seen;
        int n = static_cast<int>(nums.size());
        
        for (int i = 0; i < n; ++i) {
            int current_num = nums[i];
            
            // Check if the number has been seen before
            if (last_seen.find(current_num) != last_seen.end()) {
                int previous_index = last_seen[current_num];
                
                // Safe signed integer subtraction avoids pointer overflow
                if (i - previous_index <= k) {
                    return true;
                }
            }
            
            // Store or overwrite with the newest index
            last_seen[current_num] = i;
        }
        
        return false;
    }
    
};