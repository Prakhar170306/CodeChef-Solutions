/*
Problem: Welcome to the  AI Tutor
Problem Code: ACTEMP
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

if (max(A, C) <= B)
cout << "Yes" << endl;
else
cout << "No" << endl;
}

return 0;
}
