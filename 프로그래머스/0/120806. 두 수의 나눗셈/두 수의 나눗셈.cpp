#include<iostream>
using namespace std;

int solution(int num1, int num2) {
    double division = static_cast<double>(num1) / num2; 
    int answer = int(division * 1000);
    return answer;
}

int main() {
    cout << solution(3,2) << endl;
    cout << solution(7,3) << endl;
    cout << solution(1,16) << endl;

    return 0;
}
