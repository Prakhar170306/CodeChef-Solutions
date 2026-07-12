/*
Problem: Welcome to the  AI Tutor
Problem Code: REACH_HOME
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACH_HOME
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (X * 5 >= Y) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}
