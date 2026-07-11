/*
Problem: Welcome to the  AI Tutor
Problem Code: BULLBEAR
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (Y > X) {
cout << "PROFIT" << endl;
}
else if (Y < X) {
cout << "LOSS" << endl;
}
else {
cout << "NEUTRAL" << endl;
}
}

return 0;
}
