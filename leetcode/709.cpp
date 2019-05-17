class Solution {
public:
    string toLowerCase(string str) {
        int sl = str.length();
        
        for(int i = 0; i < sl; i++){
            if(str[i] >= 65 && str[i] <= 90)
                str[i] += 'a' - 65; 
        }
        return str;
        
    }
};