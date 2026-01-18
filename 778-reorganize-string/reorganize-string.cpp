class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char,int> freq;
        for (char c : S) freq[c]++;

        // max-heap of (count, char)
        priority_queue<pair<int,char>> pq;
        for (auto &kv : freq) pq.push({kv.second, kv.first});

        string res;
        while (pq.size() > 1) {
            auto [c1cnt, c1] = pq.top(); pq.pop();
            auto [c2cnt, c2] = pq.top(); pq.pop();

            res.push_back(c1);
            res.push_back(c2);

            if (--c1cnt > 0) pq.push({c1cnt, c1});
            if (--c2cnt > 0) pq.push({c2cnt, c2});
        }

        if (!pq.empty()) {
            auto [cnt, ch] = pq.top();
            if (cnt > 1) return "";
            res.push_back(ch);
        }
        return res;
    }
};