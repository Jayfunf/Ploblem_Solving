#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer =-1;
    stack<char> a;
    int i = 0;

    while(i<s.size()){
        if(a.empty()==false){
            if(a.top() == s[i])
                a.pop();
            else
                a.push(s[i]);
        }
        else
            a.push(s[i]);
        i++;
    }
    return a.empty()?1:0;
}