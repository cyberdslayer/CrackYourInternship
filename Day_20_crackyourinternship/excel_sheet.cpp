class Solution {
public:
    string convertToTitle(int colNum) {
        string ans ="";
        while(colNum){
            colNum--;
            int digit = colNum%26 +65;
            colNum = colNum/26;
            ans = (char)(digit)+ ans;
        }
        return ans;
    }
};