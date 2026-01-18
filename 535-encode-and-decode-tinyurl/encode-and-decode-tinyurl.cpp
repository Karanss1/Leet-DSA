
    class Solution {
    unordered_map<int, string> mp; // id -> long URL
    int id = 0;
    const string BASE_URL = "http://tinyurl.com/";
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        // Store the long URL 
        mp[id] = longUrl;
        // Create a tiny URL by appending id to base URL and return it
        return BASE_URL + to_string(id++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        
        int sid = stoi(shortUrl.substr(BASE_URL.size()));  // "STOI - string to integer" 
        // Get the long URL using the id from the map
        return mp[sid];
    }
};