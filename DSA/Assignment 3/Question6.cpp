#include <bits/stdc++.h>
using namespace std;
class packOfStack{
    stack<int>st[10];
    int curr=0;
    public:
    void push(int val){
        st[curr].push(val);
        if(st[curr].size()==5) curr++;
    }
    
    void pop(){
        st[curr].pop();
        if(st[curr].size()==0) curr--;
    }
    int top(){
        return st[curr].top();
    }
    
};


int main()
{
	packOfStack st;
	st.push(5);
	st.push(12);
	st.push(35);
	st.push(23);
	st.push(11);
	st.push(81);
	st.push(24);
	st.push(19);
	cout<<st.top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	cout<<st.top()<<endl;

	return 0;
}