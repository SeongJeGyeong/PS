#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> count;
    vector<int> sortlist;
    for(int t : tangerine)
        count[t] += 1;
    for(int i = 1; i <= count.size(); ++i)
        sortlist.push_back(count[i]);
    sort(sortlist.begin(), sortlist.end(), greater<>());
    
    for(int e : sortlist)
    {
        if(k <= 0) break;
        
        k -= e;
        ++answer;
    }
    
    return answer;
}