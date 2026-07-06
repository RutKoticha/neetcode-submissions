#include <vector>
#include <set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        return (std::set<int> (nums.begin(), nums.end())).size() != nums.size();
    }
};
