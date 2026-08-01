/*
Problem: Welcome to the  AI Tutor
Problem Code: SPEEDTEST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, X, B, Y;
cin >> A >> X >> B >> Y;

if (A * Y > B * X)
cout << "ALICE" << endl;
else if (A * Y < B * X)
cout << "BOB" << endl;
else
cout << "EQUAL" << endl;
}

return 0;
}
