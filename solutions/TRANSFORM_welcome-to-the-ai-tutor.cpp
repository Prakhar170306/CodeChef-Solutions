/*
Problem: Welcome to the  AI Tutor
Problem Code: TRANSFORM
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X % 3 == 0)
cout << "NORMAL" << endl;
else if (X % 3 == 1)
cout << "HUGE" << endl;
else
cout << "SMALL" << endl;
}

return 0;
}
