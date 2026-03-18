#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; ++i)
    {
        int temp = 0;
        bool succeed = false;
        for(int j = i; j <= n; ++j)
        {
            temp += j;
            if(temp == n)
            {
                succeed = true;
                break;
            }
            else if(temp > n)
            {
                break;
            }
        }
        if(succeed) ++answer;
    }
    
    return answer;
}