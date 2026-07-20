/*
Problem: Welcome to the  AI Tutor
Problem Code: EXPERT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (2 * Y >= X)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
