#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for(int i = 0; i < schedules.size(); ++i)
    {
        int min =  schedules[i] % 100;
        int hour = schedules[i] - min;
        min += 10;
        if(min > 59)
        {
            min = min % 60;
            hour += 100;
        }
        int limit = hour + min;
        int currentDay = startday;
        bool flag = true;
        for(int j = 0; j < 7; ++j)
        {
            if(currentDay == 6 || currentDay == 7)
            {
                ++currentDay;
                if(currentDay > 7) currentDay = 1;
                continue;
            }
            if(timelogs[i][j] > limit)
            {
                flag = false;
                break;
            }
            ++currentDay;
            if(currentDay > 7) currentDay = 1;
        }
        if(flag) ++answer;
    }
    
    return answer;
}