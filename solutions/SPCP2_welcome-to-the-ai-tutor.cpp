/*
Problem: Welcome to the  AI Tutor
Problem Code: SPCP2
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, N;
cin >> X >> N;

int capacity = X * 100;

if (capacity >= N) {
cout << 0 << endl;
} else {
int remaining = N - capacity;
cout << (remaining + 99) / 100 << endl;
}
}

return 0;
}
