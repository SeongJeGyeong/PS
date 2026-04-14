#include <iostream>

using namespace std;

bool cmp(int a, int b)
{
    if (a < b) return !(a % 2);

    return !(b % 2);
}

int solution(int n, int a, int b)
{
    int answer = 1;
    while(abs(a - b) > 1 || cmp(a, b))
    {
        a = (a % 2) ? a / 2 + 1 : a / 2;
        b = (b % 2) ? b / 2 + 1 : b / 2;
        ++answer;
    }
    
    return answer;
}