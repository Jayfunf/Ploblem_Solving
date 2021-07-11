#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int num = 0;

    while(n > 0){
        num = n%10;
        answer += num;
        n = n/10;
    }
    return answer;
}