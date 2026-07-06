#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> frequency_s;
        for (auto character : s) {
            frequency_s[character]++;
        }
        
        std::unordered_map<char, int> frequency_t;
        for (auto character : t) {
            frequency_t[character]++;
        }
        
        return frequency_s == frequency_t;
    }
};
