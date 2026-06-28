#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> hashTable1, hashTable2;
        for(char c : s) {
            hashTable1[c]++;
        }

        for(char c : t) {
            hashTable2[c]++;
        }

        return hashTable1 == hashTable2;
    }
};
