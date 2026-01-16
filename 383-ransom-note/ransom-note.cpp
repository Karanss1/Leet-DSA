class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magazineFreq;

        for (char ch : magazine) {
            magazineFreq[ch]++;
        }

        for (char ch : ransomNote) {

            // Check if the character is missing or not enough in the magazine
            if (!magazineFreq.count(ch) || magazineFreq[ch] == 0) {
                return false;
            }
            magazineFreq[ch]--;
        }

        return true;
    }
};
