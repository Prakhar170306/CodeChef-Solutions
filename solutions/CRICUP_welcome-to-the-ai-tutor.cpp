/*
Problem: Welcome to the  AI Tutor
Problem Code: CRICUP
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, D;
cin >> X >> Y >> D;

if (abs(X - Y) <= D)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
