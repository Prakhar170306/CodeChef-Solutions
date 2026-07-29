/*
Problem: CodeChef Solution
Problem Code: PRDEXC
Platform: CodeChef
URL: https://www.codechef.com/START249D/problems/PRDEXC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, P;
cin >> X >> Y >> P;

int moves = 0;

while (1LL * X * Y < P) {

if (X < Y)
X++;
else
Y++;

moves++;
}

cout << moves << endl;
}

return 0;
}
