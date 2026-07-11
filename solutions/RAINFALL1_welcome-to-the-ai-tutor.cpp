/*
Problem: Welcome to the  AI Tutor
Problem Code: RAINFALL1
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X < 3) {
cout << "LIGHT\n";
}
else if (X < 7) {
cout << "MODERATE\n";
}
else {
cout << "HEAVY\n";
}
}

return 0;
}
