class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return help(s,t) && help(t,s);
        
    }
    bool help(string s,string t){
        int n=s.length();
        unordered_map<char,char> m;
        for(int i=0;i<n;i++){
            if (m.find(s[i]) == m.end()){
                m[s[i]]=t[i];
            }
            else{
                if(m[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};