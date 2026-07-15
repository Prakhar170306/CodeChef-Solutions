/*
Problem: Welcome to the  AI Tutor
Problem Code: SPECIALITY
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

if (A > B && A > C) {
cout << "Setter" << endl;
}
else if (B > A && B > C) {
cout << "Tester" << endl;
}
else {
cout << "Editorialist" << endl;
}
}

return 0;
}
