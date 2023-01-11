#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(st.empty() || st.top()!='('){
                        return false;
                    }
                    st.pop();
                }
                else if(s[i]=='}'){
                        if(st.empty() || st.top()!='{'){
                            return false;
                        }
                        st.pop();
                    }
                else{
                    if(st.empty() || st.top()!='['){
                        return false;
                    }
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
    
int main(){
    string str = "(())(()";
    cout<<"Expression '"<<str<<"' : ";
    if(isValid(str)) cout<<"valid";
    else cout<<"Not valid";
    
    return 0;
}