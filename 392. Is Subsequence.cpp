class Solution {
public:
    bool isSubsequence(string s, string t) {
       int check=0;
        int idx=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=idx; j<t.size(); j++)
            {
                if(s[i]==t[j])
                {
                    check++;
                    idx=j+1;
                    break;
                }
            }
        }
        if(check==s.size()) return true;
        else return false;
    }
};
