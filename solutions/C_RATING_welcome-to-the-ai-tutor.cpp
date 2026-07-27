/*
Problem: Welcome to the  AI Tutor
Problem Code: C_RATING
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

cout << (Y - X + 7) / 8 << endl;
}

return 0;
}
