#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;

    for(int i = 0; i<answers.size();i++){
        if(answers[i] == one[i%5]) //one의 elements가 5개
            ans1++;
        if (answers[i] == two[i % 8]) //8개
            ans2++;
        if (answers[i] == thr[i % 10]) //10개
            ans3++;
    }

    int maxCount = max(ans1,max(ans2,ans3));

    if (maxCount == ans1)
        answer.push_back(1);
    if (maxCount == ans2)
        answer.push_back(2);
    if (maxCount == ans3)
        answer.push_back(3);
    return answer;
}