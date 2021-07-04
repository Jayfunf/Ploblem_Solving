#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer = arr;
    int check = 0;
    int mini = answer[0];
    for(int i = 1; i<arr.size();i++){
        if(answer[i] < mini){
            mini = answer[i];
            check = i;
        }
    }
    //min_element 활용해보기
    answer.erase(answer.begin() + check);
    return answer.empty() ? vector<int>(1,-1): answer;
}