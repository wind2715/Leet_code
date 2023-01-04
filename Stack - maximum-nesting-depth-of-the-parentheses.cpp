class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, res=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(') res=max(res,++cnt);
            else if(s[i]==')') --cnt;
        }
        return res;
    }
};
