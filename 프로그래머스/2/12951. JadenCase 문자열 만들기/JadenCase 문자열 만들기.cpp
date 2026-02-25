#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(i == 0 && s[i] >= 'a')
        {
            answer += (s[i] - 32);
        }
        else if(i != 0 && s[i-1] == ' ' && s[i] >= 'a')
        {
            answer += (s[i] - 32);
        }
        else if(i != 0 && s[i-1] != ' ' && (s[i] >= 'A' && s[i] <= 'Z'))
        {
            answer += (s[i] + 32);
        }
        else
        {
            answer += s[i];
        }
    }
    
    return answer;
}