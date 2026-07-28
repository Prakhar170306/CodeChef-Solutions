/*
Problem: Welcome to the  AI Tutor
Problem Code: XJUMP
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

cout << (X / Y) + (X % Y) << endl;
}

return 0;
}
