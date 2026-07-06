#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hashTable;

        for (int i = 0; i < nums.size(); i++) {
            if (hashTable.find(target - nums[i]) != hashTable.end()) {
                return { hashTable[target - nums[i]], i };
            }
            hashTable[nums[i]] = i;
        }

        return {-1, -1};
    }
};
