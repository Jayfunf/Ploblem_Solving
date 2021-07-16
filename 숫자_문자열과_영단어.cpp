#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string alpha[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int solution(string s)
{
    string ans1 = "";
    int answer = 0;
    for (int i = 0; i < s.size(); i++){
        bool check = false;
        char temp = s[i];
        for(int j = 0; j<10;j++){
            if(temp == num[j]){
                check = true;
                ans1 += temp;
            }
        }
        if(!check){
            string ans2 = "";
            for(int k = i; k<s.size();k++){
                ans2 +=s[k];
                for(int p = 0; p<10;p++){
                    if(ans2 == alpha[p]){
                        ans1 += num[p];
                        break;
                    }
                }
            }
        }
    }
    answer = stoi(ans1);
    return answer;
}