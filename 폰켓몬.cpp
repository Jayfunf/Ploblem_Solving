#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    answer = nums.size()/2;
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    answer = nums.size();
    return answer;
}