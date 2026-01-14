#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    string ret = "";
    bool mode = 0;
    for(int i = 0; i < code.size(); ++i)
    {
        if(code[i] == '1')
        {
            mode = !mode;
        }
        else
        {
            if(mode)
            {
                if(i % 2)
                {
                    ret += code[i];
                }
            }
            else
            {
                if(i % 2 == 0)
                {
                    ret += code[i];
                }   
            }
        }
    }
    
    answer = (ret == "") ? "EMPTY" : ret;
    
    return answer;
}