class Solution {
public:
    bool palin(string s ,int i ,int j){
        while(j>=i){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start =0;;
        int end = s.size()-1;

        while(start<=end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else {
                return palin(s,start+1,end) || palin(s, start, end-1);
            }


        }
        return true;
    }
};