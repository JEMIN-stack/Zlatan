#include<iostream>
using namespace std;

int result = 0;
int hiki(int x, int y, int result) {
    if (y == 0)
	return result;
    
    else if ((y & 1) == 1)
        result += x;

    return hiki(x << 1, y >> 1, result); 
}

int solution(int num1, int num2) { 
    int n = hiki(num1, num2, 0);
    return n;
}

int main() {
    cout << solution(3,4) << endl;
    cout << solution(27,19) << endl;

    return 0;
}

