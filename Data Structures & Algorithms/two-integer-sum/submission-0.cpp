#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashTable;
        for(int i = 0; i < nums.size(); i++) {
            if(hashTable.find(target - nums.at(i)) != hashTable.end()) {
                return {hashTable.at(target - nums.at(i)), i};
            }

            hashTable[nums.at(i)] = i;
        }

        return {};
    }
};
