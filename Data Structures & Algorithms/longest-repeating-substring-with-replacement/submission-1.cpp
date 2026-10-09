class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int ans=0;
        int j=0;
        int mf=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mf=max(mf,mp[s[i]]);
            while((i-j+1)-mf>k){
                mp[s[j]]--;
                j++;
            }
            ans=max(i-j+1, ans);
        }
        return ans;
    }
};
