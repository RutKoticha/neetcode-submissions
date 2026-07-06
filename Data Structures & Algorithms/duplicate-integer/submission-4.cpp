#include <vector>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int number : nums) {
            if (seen.count(number)) {
                return true;
            }

            seen.insert(number);
        }

        return false;
    }
};
