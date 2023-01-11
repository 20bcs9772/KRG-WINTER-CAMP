class Solution {
public:
    string removeCharactersFromString(string str, char c,map<char,int> &hm){
        string ans = "";
        int i=0;
        for(i;i<str.length();i++){
            if(str[i]==c){
                i++;
                break;
            } else {
                hm.erase(str[i]);
            }
        }
        for(i;i<str.length();i++){
            ans+=str[i];
        }

        return ans;
    };

    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        } else if(s.length() == 1 ){
            return 1;
        }
        string ans = "";
        vector<int> vals;
        map<char,int> hm;
        for(int i=0;i<s.length();i++){
            if(hm.find(s[i]) == hm.end()){
                // not found
                hm[s[i]] = i;
                ans+=s[i];
            } else {
                // found
                vals.push_back(ans.length());
                ans = removeCharactersFromString(ans,s[i],hm)+s[i];
                hm.erase(s[i]);
                hm[s[i]] = i;
            }
        }

        vals.push_back(ans.length());
        return *max_element(vals.begin(),vals.end());
    }
};
