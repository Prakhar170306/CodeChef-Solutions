/*
Problem: Welcome to the  AI Tutor
Problem Code: HS08TEST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int X;
double Y;

cin >> X >> Y;

if (X % 5 == 0 && X + 0.50 <= Y) {
Y = Y - X - 0.50;
}

cout << fixed << setprecision(2) << Y;

return 0;
}
