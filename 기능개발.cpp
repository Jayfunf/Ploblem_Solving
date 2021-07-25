#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    queue<int> q;
    int tmp1, tmp2;
    int day_check = 1;
    for (int i = 0; i < progresses.size(); i++){ //여기서 얼마나 걸리는지 계산한다.
        tmp1 = (100 - progresses[i])/speeds[i];  //즉, speeds를 더하며 계산할 필요 없이 걸리는 날짜만 비교하면 끝이다.
        tmp2 = (100 - progresses[i])%speeds[i];
        if(tmp2!=0)
            tmp1+=1;
        q.push(tmp1);
    }
    int frt = q.front();
    q.pop();
    while (!q.empty()){
        if(frt >= q.front()){
            day_check++;
            q.pop();
        }
        if(frt < q.front()){
            answer.push_back(day_check);
            frt = q.front();
            q.pop();
            day_check = 1;
        }
    }
    answer.push_back(day_check);
    return answer;
}