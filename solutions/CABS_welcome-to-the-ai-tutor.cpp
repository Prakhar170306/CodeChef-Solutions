/*
Problem: Welcome to the  AI Tutor
Problem Code: CABS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CABS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (X < Y) {
cout << "FIRST" << endl;
}
else if (Y < X) {
cout << "SECOND" << endl;
}
else {
cout << "ANY" << endl;
}
}

return 0;
}
