/*
Problem: Welcome to the  AI Tutor
Problem Code: TRUESCORE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C, D;
cin >> A >> B;
cin >> C >> D;

if (C >= A && D >= B)
cout << "POSSIBLE" << endl;
else
cout << "IMPOSSIBLE" << endl;
}

return 0;
}
