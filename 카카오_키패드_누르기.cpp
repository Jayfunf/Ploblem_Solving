#include <string>
#include <vector>

using namespace std;

vector<pair<int, int>> p = {
    {3, 1}, //0
    {0, 0}, //1
    {0, 1}, //2
    {0, 2}, //3
    {1, 0}, //4
    {1, 1}, //5
    {1, 2}, //6
    {2, 0}, //7
    {2, 1}, //8
    {2, 2}, //9
    {3, 0}, //* - 10
    {3, 2}  //# - 11
};

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    int left = 10;
    int right = 11;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += 'L';
            left = numbers[i];
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += 'R';
            right = numbers[i];
        }
        else if (numbers[i] == 2 || numbers[i] == 5 || numbers[i] == 8 || numbers[i] == 0)
        {
            int left_hand = abs(p[numbers[i]].first - p[left].first) + abs(p[numbers[i]].second - p[left].second);
            int right_hand = abs(p[numbers[i]].first - p[right].first) + abs(p[numbers[i]].second - p[right].second);
            if (left_hand == right_hand)
            {
                if (hand == "left")
                {
                    answer += 'L';
                    left = numbers[i];
                }
                else if (hand == "right")
                {
                    answer += 'R';
                    right = numbers[i];
                }
            }
            else if (left_hand > right_hand)
            {
                answer += 'R';
                right = numbers[i];
            }
            else if (left_hand < right_hand)
            {
                answer += 'L';
                left = numbers[i];
            }
        }
    }
    return answer;
}