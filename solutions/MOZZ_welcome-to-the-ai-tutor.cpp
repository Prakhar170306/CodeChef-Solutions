/*
Problem: Welcome to the  AI Tutor
Problem Code: MOZZ
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int X, Y, R;
cin >> X >> Y >> R;

int extra = R / 30;
int total = X + extra;

cout << (total + Y - 1) / Y << '\n';
}

return 0;
}
