class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        for(char ch:s1) mp[ch]++;
        int j=0;
        int ans=0;
        int n=s1.length();
        for(int i=0;i<s2.length();i++){
            mp[s2[i]]--;
            while(mp[s2[i]]<0){
                mp[s2[j]]++;
                j++;
            }
            if(i-j+1==n) return true;
        }
        return false;
    }
};
