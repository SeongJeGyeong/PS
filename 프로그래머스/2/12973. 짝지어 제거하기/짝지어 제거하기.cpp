#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    if(s.length() < 2) return 0;
    int answer = -1;
    
    stack<char> st;
    st.push(s[0]);
    
    for(int i = 1; i < s.length(); ++i)
    {
        if(!st.empty() && st.top() == s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    
    answer = st.empty();

    return answer;
}