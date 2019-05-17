class Solution {
public:
    void reverseString(vector<char>& s) {
        int slength = s.size()/2;
        int sl = s.size();
        char temp;
        for(int i = 0; i < slength; i++){
            temp = s[i];
            s[i] = s[sl - 1 - i];
            s[sl - 1 - i] = temp;
        }
        
    }
};