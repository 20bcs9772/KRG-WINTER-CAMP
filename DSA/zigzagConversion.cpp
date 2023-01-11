class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.length()==1) return s;
        string ans = "";
        int maxIncr = 2*(numRows-1);
        for(int j=0;j<numRows;j++){
            int i = j;
            int decr = 2*j;
            while(i<s.length()){
                ans+=s[i];
                int incr = maxIncr - decr;
                i+=incr;
                if( ( incr < maxIncr ) && ( i < s.length() ) ){
                    if(incr != 0) ans+=s[i];
                    i+=decr;
                }
            }
        }
        return ans;
    }
};
