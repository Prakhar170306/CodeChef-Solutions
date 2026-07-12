/*
Problem: Welcome to the  AI Tutor
Problem Code: M1ENROL
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (Y > X) {
cout << Y - X << endl;
} else {
cout << 0 << endl;
}
}

return 0;
}
