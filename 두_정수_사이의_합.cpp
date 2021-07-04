#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    if(a>b)a ^= b ^= a ^= b; // 한 수 배움
    for(int i = a; i<=b; i++){
        answer += i;
    }
    return a == b? a : answer;
}