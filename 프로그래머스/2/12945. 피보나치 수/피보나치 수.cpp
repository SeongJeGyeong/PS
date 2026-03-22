#include <string>
#include <vector>

using namespace std;

int bt(int i)
{
    if(i < 2) return i;
    
    return ((bt(i-2) + bt(i-1)) % 1234567);
}

int solution(int n) {
    
    int answer = 0;
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for(int i = 2; i <= n; ++i)
    {
        int temp = (f[i-1] + f[i-2]) % 1234567;
        f.push_back(temp);
    }
    
    return f[n] % 1234567;
}