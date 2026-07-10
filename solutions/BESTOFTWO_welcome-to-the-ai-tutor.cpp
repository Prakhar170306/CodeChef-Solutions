/*
Problem: Welcome to the  AI Tutor
Problem Code: BESTOFTWO
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (X > Y) {
cout << X << endl;
} else {
cout << Y << endl;
}
}

return 0;
}
