#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    bool used[31];//2명이상 30명 이하
    vector<int> tmp;
    for(int i = 0; i<31;i++)
        used[i]=false;

    for (int i = 0; i < lost.size(); i++){
        for (int j = 0; j < reserve.size(); j++){
            if(lost[i]==reserve[j]){
                used[j]=true;
                break;
            }
            else if (j==reserve.size()-1){
                tmp.push_back(lost[i]);
                break;
            }
        }
    }
    int answer = n - tmp.size();
    for (int i = 0; i < tmp.size(); i++){
        for(int j = 0; j<reserve.size();j++){
            if (((tmp[i] + 1 == reserve[j]) || (tmp[i] - 1 == reserve[j])) && (used[j]==false)){
                used[j]=true;
                answer+=1;
                break;
            }
        }
    }
    return answer;
}