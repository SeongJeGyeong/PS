#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {    
    set<int> answer;
    
    for(int i = 0; i <= elements.size(); ++i)
    {
        int sum = 0;
        for(int j = i; j < i + elements.size(); ++j)
        {
            int k = j % elements.size();
            sum += elements[k];
            answer.emplace(sum);
        }
    }
    
    return answer.size();
}