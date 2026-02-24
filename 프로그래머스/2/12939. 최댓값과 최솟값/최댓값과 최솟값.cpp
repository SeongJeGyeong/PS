#include <string>
#include <vector>
#include <limits>

using namespace std;

string solution(string s) {
    string answer = "";
    
    string tempStr = "";
    
    int mn = numeric_limits<int>::max();
    int mx = numeric_limits<int>::min();
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == ' ')
        {
            int num = stoi(tempStr);
            mn = min(mn, num);
            mx = max(mx, num);
            tempStr = "";
        }
        else
        {
            tempStr += s[i];   
        }
    }
    
    int num = stoi(tempStr);
    mn = min(mn, num);
    mx = max(mx, num);
    tempStr = "";
    
    answer += to_string(mn);
    answer += ' ';
    answer += to_string(mx);
    
    return answer;
}