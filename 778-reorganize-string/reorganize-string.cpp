class Solution {
public:
    string reorganizeString(string s) {
        // Step 1: Count frequency of each character
        int freqHash[26] = {0};
        for(int i = 0; i < s.size(); i++){
            freqHash[s[i] - 'a']++;
        }

        // Step 2: Find the character with highest frequency
        int highFreq = 0;
        char highChar;
        for(int i = 0; i < 26; i++){
            if(freqHash[i] > highFreq){
                highFreq = freqHash[i];
                highChar = i + 'a';
            }
        }

        // Step 3: Place the most frequent character at even indices
        int i = 0;
        while(i < s.size() && highFreq > 0){
            s[i] = highChar;
            i += 2;  // Move to next even position
            highFreq--;
        }

        // Step 4: If we couldn't place all occurrences, it's impossible
        if(highFreq != 0) return "";
        
        // Mark this character as fully placed
        freqHash[highChar - 'a'] = 0;

        // Step 5: Place all remaining characters
        for(int j = 0; j < 26; j++){
            while(freqHash[j] > 0){
                // If we've filled all even positions, switch to odd positions
                if(i >= s.size()) i = 1;
                
                s[i] = j + 'a';
                freqHash[j]--;
                i += 2;  // Move to next available position
            }
        }
        
        return s;
    }
};