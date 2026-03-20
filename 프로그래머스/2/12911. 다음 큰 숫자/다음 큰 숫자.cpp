#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp = n;
    int count = 0;
    while(temp > 0)
    {
        count += temp % 2;
        temp /= 2;
    }
    int cand = n;
    int match = 0;
    while(match != count)
    {
        match = 0;
        ++cand;
        int temp2 = cand;
        while(temp2 > 0)
        {
            match += temp2 % 2;
            temp2 /= 2;
        }
    }
    answer = cand;
    
    return answer;
}