#include <string>
#include <vector>
#include <algorithm> //sort사용

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    sort(participant.begin(),participant.end()); //값 비교를 위한 정렬
    sort(completion.begin(), completion.end()); // 값 비교를 위한 정렬

    for(int i = 0; i<participant.size();i++){
        if(participant[i] != completion[i]){
            answer = participant[i];
            break;
        }
    }
    return answer;
}