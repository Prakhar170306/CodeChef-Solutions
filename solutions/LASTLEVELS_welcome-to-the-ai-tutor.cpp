/*
Problem: Welcome to the  AI Tutor
Problem Code: LASTLEVELS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, Z;
cin >> X >> Y >> Z;

int breaks = (X - 1) / 3;
int total = X * Y + breaks * Z;

cout << total << endl;
}

return 0;
}
