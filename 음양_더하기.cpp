#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
    int sum=0;
    for(int i = 0; i<absolutes.size();i++){
        if(signs[i] == false){
            sum -= absolutes[i]*2;
        }
        sum += absolutes[i];
    }
    return sum;
}