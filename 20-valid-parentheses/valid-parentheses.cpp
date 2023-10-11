class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            char ch = s[i];

            if(ch == '(' || ch=='{' || ch== '['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char topCH = st.top();
                    if(ch ==')' && topCH == '('){
                        st.pop();
                    }
                    else if(ch == '}' && topCH == '{'){
                        st.pop();
                    }
                    else if(ch == ']' && topCH == '['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }

            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
        
    
};