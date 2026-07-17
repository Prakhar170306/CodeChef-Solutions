/*
Problem: Welcome to the  AI Tutor
Problem Code: F1RULE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/F1RULE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (100 * Y <= 107 * X)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
