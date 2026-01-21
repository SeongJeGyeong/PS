#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    map<int, int> servers;
    
    for(int i = 0; i < players.size(); ++i)
    {
        if(players[i] / m > 0)
        {
            int sub = players[i] / m - servers[i];
            if(sub <= 0) continue;
            for(int j = i; j < i + k; ++j)
            {
                servers[j] += sub;
            }
            
            answer += sub;
        }
    }
    
    
    return answer;
}