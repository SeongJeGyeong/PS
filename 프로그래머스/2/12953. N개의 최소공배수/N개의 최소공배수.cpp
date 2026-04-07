#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    
    return gcd(b, a % b);
}

int solution(vector<int> arr) {
    
    if(arr.size() == 1) return arr[0];
    
    int answer = 0;
    
    for(int i = 1; i < arr.size(); ++i)
    {
        if(answer == 0)
            answer = arr[i] * arr[i-1] / gcd(arr[i], arr[i-1]);
        else
            answer = answer * arr[i] / gcd(answer, arr[i]);
    }
    
    return answer;
}