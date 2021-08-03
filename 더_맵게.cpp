#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    int temp1, temp2;
    priority_queue<int,vector<int>,greater<int>> sco; //우선 순위 큐 사용
    for(int i = 0; i< scoville.size();i++){
        sco.push(scoville[i]);
    }
    while((sco.top()<K)&&(sco.size()>1)){
        temp1=sco.top();
        sco.pop();
        temp2=sco.top();
        sco.pop();
        sco.push(temp1+(temp2*2));
        answer++;
    }
    if(sco.top()<K)
        return -1;
    return answer;
}
//참고 블로그 https://coding-soomae.tistory.com/11
//참고 블로그 https://blog.naver.com/smkim104/222407594965
