#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> required;
    for(int i = 0; i < want.size(); ++i)
        required.emplace(want[i], number[i]);
    
    for(int i = 0; i < discount.size() - 9; ++i)
    {
        unordered_map<string, int> cart;
        for(int j = i; j < i+10; ++ j)
            cart[discount[j]]++;
        
        if(required == cart) ++answer;
    }
    
    return answer;
}