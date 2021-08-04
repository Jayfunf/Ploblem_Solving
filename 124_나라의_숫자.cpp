#include <string>
#include <vector>

using namespace std;

string solution(int n)
{
    string answer = "";

    int arr[] = {4,1,2}; // %3 = 0 == 4, %3 = 1 == 1, %3 = 2 == 2

    while(n>0){
        int a = n%3;
        int b = (n-1)/3;

        n = b;

        answer = to_string(arr[a])+answer;
    }
    return answer;      
}