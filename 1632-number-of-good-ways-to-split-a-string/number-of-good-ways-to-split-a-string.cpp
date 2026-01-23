class Solution {
public:
    int numSplits(string s) {
        
        int n=s.size();
        unordered_set<char>st1,st2;
        vector<int>pref(n+1),suff(n+1);

        for(int i=0;i<n;i++){
            st1.insert(s[i]);
            pref[i+1]=st1.size();
        }
        
        for(int i=n-1;i>=0;i--){
            st2.insert(s[i]);
            suff[i+1]=st2.size();
        }

        int ans=0;
        for(int i=1;i<n;i++){
            if(pref[i]==suff[i+1]){
                ans++;
            }
        }
        return ans;
    }
};