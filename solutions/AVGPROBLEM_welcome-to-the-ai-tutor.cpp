/*
Problem: Welcome to the  AI Tutor
Problem Code: AVGPROBLEM
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

if (A + B > 2 * C)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
