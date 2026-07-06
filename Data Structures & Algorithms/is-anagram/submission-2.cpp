#include <string>
#include <array>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::array<int, 26> frequency;
        for (auto character : s) {
            frequency[character - 'a']++;
        }

        for (auto character : t) {
            frequency[character - 'a']--;
        }
        
        for (auto freq : frequency) {
            if (freq) return false;
        }

        return true;
    }
};
