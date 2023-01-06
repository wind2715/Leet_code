class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> m1;
        map<char,int> m4;
        map<char,char> m2;
        map<char,char> m3;
        for(int i=0; i<s.size(); i++)
        {
            if(!m1[s[i]] && !m4[t[i]])
            {
                m2[s[i]]=t[i];
                m3[t[i]]=s[i];
                m1[s[i]]++;
                m4[t[i]]++;
            }
            else
            {
                if(m3[t[i]]!=s[i]) return false;
                if(m2[s[i]]!=t[i]) return false;
            }
        }
        return true;
    }
};
