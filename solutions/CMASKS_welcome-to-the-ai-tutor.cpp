/*
Problem: Welcome to the  AI Tutor
Problem Code: CMASKS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

int disposable = 100 * X;
int cloth = 10 * Y;

if (cloth <= disposable) {
cout << "CLOTH" << endl;
} else {
cout << "DISPOSABLE" << endl;
}
}

return 0;
}
