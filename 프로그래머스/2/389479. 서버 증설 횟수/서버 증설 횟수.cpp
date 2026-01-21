#include <string>
#include <vector>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    vector<int> servers(24);
    
    for(int i = 0; i < players.size(); ++i)
    {
        if(players[i] / m > 0)
        {
            int sub = players[i] / m - servers[i];
            if(sub <= 0) continue;
            int max = min(i + k, 24);
            for(int j = i; j < max; ++j)
            {
                servers[j] += sub;
            }
            
            answer += sub;
        }
    }
    
    
    return answer;
}
