/*
Problem: Welcome to the  AI Tutor
Problem Code: EXAMCHEF
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, Z;
cin >> X >> Y >> Z;

if (2 * Z > X * Y)
cout << "YES\n";
else
cout << "NO\n";
}

return 0;
}
