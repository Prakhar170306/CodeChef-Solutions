/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFAPPS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int S, X, Y, Z;
cin >> S >> X >> Y >> Z;

int freeSpace = S - X - Y;

if (freeSpace >= Z)
cout << 0 << '\n';
else if (freeSpace + Y >= Z)
cout << 1 << '\n';
else
cout << 2 << '\n';
}

return 0;
}
