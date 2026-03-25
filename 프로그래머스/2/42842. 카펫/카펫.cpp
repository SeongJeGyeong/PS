#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
   // 1. 가로와 세로의 합(S)과 곱(P) 구하기
    int S = (brown + 4) / 2;
    int P = brown + yellow;
    
    // 2. 근의 공식에 들어갈 루트 안쪽 부분 (S^2 - 4P) 계산
    int determinant = (S * S) - (4 * P);
    
    // 3. 근의 공식을 적용하여 가로(w)와 세로(h) 구하기
    int w = (S + sqrt(determinant)) / 2; // 가로는 더 길거나 같으므로 '+' 사용
    int h = (S - sqrt(determinant)) / 2; // 세로는 더 짧거나 같으므로 '-' 사용
    
    answer.push_back(w);
    answer.push_back(h);
    
    return answer;
}