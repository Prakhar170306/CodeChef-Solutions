/*
Problem: Welcome to the  AI Tutor
Problem Code: MINCOINS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X % 5 != 0)
cout << -1 << '\n';
else
cout << X / 10 + (X % 10) / 5 << '\n';
}

return 0;
}
