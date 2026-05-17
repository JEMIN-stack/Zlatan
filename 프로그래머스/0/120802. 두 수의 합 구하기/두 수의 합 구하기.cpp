#include<iostream>
using namespace std;

int hiki(int x, int y) {
    return !y ? x : hiki(x ^ y, (x & y) << 1);
}

int solution(int num1, int num2) {
    int n = hiki(num1, num2);
    return n;
}

int main() {
    cout << solution(2,3) << endl;
    cout << solution(100,2) << endl;

    return 0;
}
