class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool ok = false;
       for (int i = 0; i + 1 < nums.size(); ++i) {
        if (nums[i] == nums[i + 1]) {
            ok = true;
            break;
        }
       }
       return ok;
    }
};