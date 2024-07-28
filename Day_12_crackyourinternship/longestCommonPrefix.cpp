class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string temp = strs[0];
        string m = strs[n-1];
        for(int i=0; i<m.size();i++){
            if(m[i] == temp[i]) ans+=temp[i];
            else break;
        }
        return ans;
    }

};