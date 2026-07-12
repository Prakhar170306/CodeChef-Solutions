/*
Problem: Welcome to the  AI Tutor
Problem Code: SIXFRIENDS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SIXFRIENDS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

cout << min(3 * X, 2 * Y) << endl;
}

return 0;
}
