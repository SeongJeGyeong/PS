#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> brackets;
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '(')
        {
            brackets.push(s[i]);
        }
        else
        {
            if(brackets.size() > 0)
            {
                brackets.pop();
            }
            else
            {
                brackets.push(s[i]);
            }
        }
    }
    
    answer = brackets.size() == 0;
    
    return answer;
}