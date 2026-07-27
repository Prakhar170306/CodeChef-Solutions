/*
Problem: Welcome to the  AI Tutor
Problem Code: BULLET
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, Z;
cin >> X >> Y >> Z;

int travelTime = Y / X;

cout << max(0, Z - travelTime) << endl;
}

return 0;
}
