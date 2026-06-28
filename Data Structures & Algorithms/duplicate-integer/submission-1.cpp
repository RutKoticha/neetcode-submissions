#include <unordered_map>

class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashTable;
        for(int num : nums) {
            hashTable[num]++;
        }

        for(auto [num, freq] : hashTable) {
            if(freq > 1) {
                return true;
            }
        }
        return false;
    }
};