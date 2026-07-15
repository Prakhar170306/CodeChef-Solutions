/*
Problem: Welcome to the  AI Tutor
Problem Code: BUDGET_
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BUDGET_
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (X >= 30 * Y) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}
