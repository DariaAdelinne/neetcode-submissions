class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a, b;
        stack<int> st;
        for(const string& token : tokens)
        {
            if(token != "+" && token != "-" && token != "*" && token != "/")
                st.push(stoi(token));
            else
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();

                if(token == "+")
                    st.push(a + b);
                else if(token == "-")
                    st.push(b - a);
                    else if(token == "*")
                        st.push(a * b);
                        else if(token == "/")
                            st.push(b/a);
            }
        }
        return st.top();
    }
};
