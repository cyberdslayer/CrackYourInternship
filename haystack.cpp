class Solution {
public:
    int strStr(string haystack, string needle) {

        int i = 0 , j = 0;
        int n = needle.size();
        int m = haystack.size();
        
        if(n > m) return -1;

        for(int i=0; i<= m-n; i++){
            if(haystack.substr(i, n)==needle){
                return i;
            }
        }
        return -1;
    }
};