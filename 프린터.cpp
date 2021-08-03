#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) //우선 순위 큐 사용?
{
    int answer = 0;
    queue<pair<int,int>> que;
    priority_queue<int> pri_que;//내림차순 정렬

    for(int i = 0; i<priorities.size();i++){
        que.push(make_pair(i,priorities[i])); //인덱스와 프린트 대기 입력값을 쌍으로 만듦
        pri_que.push(priorities[i]); //내림차순으로 우선순위 정렬(2,1,3,2 라면 --> 1,2,2,3)
    }
    while(!que.empty()){
        int index = que.front().first; //index를 선언하여 순서 저장
        int value = que.front().second; //value를 선언하여 값 저장
        que.pop();
        if(value == pri_que.top()){ //값이 내림차순으로 정렬되어진 pri_que.top의 값과 같다면 
            pri_que.pop(); //원하는 값이 항상 최대 값이 아닐 수 있으니 비교가 끝난 pri_que값을 빼줌
            answer++;
            if(index == location)
                break;
        }
        else
            que.push(make_pair(index,value)); //만약 원하는 값이 아닐 경우 pop한 index와 value의 값을 que의 뒤에 다시 넣어줌
    }
    return answer;
}
/*
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<int> printer;                         //queue에 index 삽입.
    vector<int> sorted;                         //정렬된 결과 저장용
    for(int i=0; i<priorities.size(); i++) {
        printer.push(i);
    }
    while(!printer.empty()) {
        int now_index = printer.front();
        printer.pop();
        if(priorities[now_index] != *max_element(priorities.begin(),priorities.end())) {
            //아닌경우 push
            printer.push(now_index);
        } else {
            //맞는경우
            sorted.push_back(now_index);
            priorities[now_index] = 0;
        }
    }
    for(int i=0; i<sorted.size(); i++) {
        if(sorted[i] == location) return i+1;
    }
}
*/