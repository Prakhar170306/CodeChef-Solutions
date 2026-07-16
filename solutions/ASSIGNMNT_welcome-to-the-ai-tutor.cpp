/*
Problem: Welcome to the  AI Tutor
Problem Code: ASSIGNMNT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ASSIGNMNT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, Z;
cin >> X >> Y >> Z;

if (X * Y <= Z * 1440)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
