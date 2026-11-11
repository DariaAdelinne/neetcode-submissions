class Solution {
public:
    string reverseParentheses(string s) {
        string st, temp;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ')')
                st.push_back(s[i]);
            else
            {
                while(st.size() && st.back() != '(')
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
