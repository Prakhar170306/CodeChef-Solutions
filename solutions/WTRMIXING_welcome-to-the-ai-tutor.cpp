/*
Problem: Welcome to the  AI Tutor
Problem Code: WTRMIXING
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int A, B, X, Y;
cin >> A >> B >> X >> Y;

if (B >= A - Y && B <= A + X)
cout << "YES\n";
else
cout << "NO\n";
}

return 0;
}
