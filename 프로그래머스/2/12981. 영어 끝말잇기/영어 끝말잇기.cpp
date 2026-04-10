#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0, 0};
    unordered_set<string> st;
    
    int now = 2;
    int turn = 1;
    char last = words[0].back();
    st.insert(words[0]);
    for(int i = 1; i < words.size(); ++i)
    {        
        if(words[i].front() == last && st.find(words[i]) == st.end())
        {
            st.insert(words[i]);
            last = words[i].back();
        }
        else
        {
            answer = {now, turn};
            break;   
        }
        
        if(++now > n)
        {
            now = 1;
            ++turn;
        }
    }
    
    return answer;
}