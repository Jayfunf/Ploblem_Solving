#include <string>
#include <vector>

using namespace std;
string answer;
string solution(string s)
{
    if(s.size()%2 == 1){
        answer = s[s.size()/2];
    }
    else{
        answer.push_back(s[(s.size()/2)-1]);
        answer.push_back(s[s.size()/2]);
    }
    return answer;
}