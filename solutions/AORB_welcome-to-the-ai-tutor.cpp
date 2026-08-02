/*
Problem: Welcome to the  AI Tutor
Problem Code: AORB
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

int firstA = (500 - 2 * X) + (1000 - 4 * (X + Y));

int firstB = (1000 - 4 * Y) + (500 - 2 * (X + Y));

cout << max(firstA, firstB) << endl;
}

return 0;
}
