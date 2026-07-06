#include <vector>
#include <set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::set<int> numSet(nums.begin(), nums.end());
        return numSet.size() != nums.size();
    }
};
