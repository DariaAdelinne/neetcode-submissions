class Solution {
public:
    string reverseParentheses(string s) {
        string st;
        string temp;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ')')
                st.push_back(s[i]);
            else
            {
                while(st.back() != '(' && st.size())
                {
                    temp.push_back(st.back());
                    st.pop_back();
                    
                }
                if(st.back() == '(')
                {
                    st.pop_back();
                    st += temp;
                    temp = "";
                }
            }
        }
        return st;
    }
};
