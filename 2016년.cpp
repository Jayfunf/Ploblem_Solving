#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    
    int year[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string date[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i= 0 ; i< a; i++){
        b += year[i];
    }
    string answer = date[(b+4)%7]; //기준인 2016년 1월 1일이 금요일이기 때문에 +4로 금요일로 만들어줌

    return answer;
}