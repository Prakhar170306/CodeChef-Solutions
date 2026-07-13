/*
Problem: Welcome to the  AI Tutor
Problem Code: PROINC
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

cout << Y + (X / 10) << endl;
}

return 0;
}
