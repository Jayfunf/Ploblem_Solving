#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    for(int i = 0; i<s.size();i++){
        if(!(s[i]>='0' && s[i]<='9'))
            answer = false;
    }//isdigit 함수 존재함
    return (s.size() != 4 && s.size() != 6)?false:answer;
}