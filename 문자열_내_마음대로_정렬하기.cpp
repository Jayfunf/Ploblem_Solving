#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int Num;

bool compare(string a, string b){
    return a.at(Num) == b.at(Num) ? a < b : a.at(Num) < b.at(Num);
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer = strings;
    Num = n;
    sort(answer.begin(),answer.end(),compare);
    return answer;
}