#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;

    queue<pair<int,int>> que;
    priority_queue<int> pri_que; //내림 정렬

    for(int i = 0; i< priorities.size();i++){
        que.push(make_pair(i,priorities[i]));
        pri_que.push(priorities[i]);
    }
    while(!que.empty()){
        int index = que.front().first;
        int value = que.front().second;
        que.pop();
        if(value == pri_que.top()){
            pri_que.pop();
            answer++;
            if(index == location)
                break;
        }
        else
            que.push(make_pair(index,value));
    }
    return answer;
}