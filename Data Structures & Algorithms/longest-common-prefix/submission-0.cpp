class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string f=strs[0];
        int n=strs.size();
        string e=strs[n-1];
        string ans="";
        for(int i=0;i<min(f.length(),e.length());i++){
            if(f[i]==e[i]) ans.push_back(f[i]);
            else break;
        }
        return ans;
    }
};