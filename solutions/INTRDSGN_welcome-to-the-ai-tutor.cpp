/*
Problem: Welcome to the  AI Tutor
Problem Code: INTRDSGN
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X1, Y1, X2, Y2;
cin >> X1 >> Y1 >> X2 >> Y2;

int style1 = X1 + Y1;
int style2 = X2 + Y2;

cout << min(style1, style2) << endl;
}

return 0;
}
