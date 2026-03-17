#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    int count = 0;
    int zero = 0;
    while(s != "1")
    {
        ++count;
        string news;
        for(int i = 0; i < s.length(); ++i)
        {
            if(s[i] == '0')
            {
                ++zero;
            }
            else
            {
                news += s[i];
            }
        }
        int c = news.length();
        
        string temp;
        while(c != 0)
        {
            int x = c % 2;
            c /= 2;
            temp += to_string(x);
        }
        reverse(temp.begin(), temp.end());
        s = temp;
    }
    answer.push_back(count);
    answer.push_back(zero);
    return answer;
}