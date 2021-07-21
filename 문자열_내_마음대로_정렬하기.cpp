#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer = strings;
    vector<string> tmp;
    for(int i = 0; i<n ; i++){
        tmp[i] = answer[i][n];
    }
    sort(tmp.begin(), tmp.end());

    return answer;
}