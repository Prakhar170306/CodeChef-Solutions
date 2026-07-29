/*
Problem: Welcome to the  AI Tutor
Problem Code: WGHTS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
long long W, X, Y, Z;
cin >> W >> X >> Y >> Z;

if (W == X || W == Y || W == Z ||
W == X + Y || W == X + Z || W == Y + Z ||
W == X + Y + Z)
cout << "YES\n";
else
cout << "NO\n";
}

return 0;
}
