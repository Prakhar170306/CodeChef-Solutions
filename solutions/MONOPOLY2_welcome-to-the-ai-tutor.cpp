/*
Problem: Welcome to the  AI Tutor
Problem Code: MONOPOLY2
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int P, Q, R, S;
cin >> P >> Q >> R >> S;

if (P > Q + R + S ||
Q > P + R + S ||
R > P + Q + S ||
S > P + Q + R)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
