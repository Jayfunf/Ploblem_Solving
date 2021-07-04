#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    int a = 5;
    int b = 3;

    cout << a << b <<endl;
    a ^= b ^= a ^= b;
    cout << a << b << endl;

    return 0;
}