#include <string>
#include <vector>

using namespace std;



vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int size = brown + yellow;
    for(int h = 3; h <= size / h; ++h)
    {
        int w = size / h;       
        int y = (h-2) * (w-2);
        int b = size - y;
        if(yellow == y && brown == b)
        {
            answer.push_back(w);
            answer.push_back(h);
            break;
        }   
    }
    
    return answer;
}