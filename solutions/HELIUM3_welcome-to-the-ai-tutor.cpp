/*
Problem: Welcome to the  AI Tutor
Problem Code: HELIUM3
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, X, Y;
cin >> A >> B >> X >> Y;

if (X * Y >= A * B)
cout << "Yes" << endl;
else
cout << "No" << endl;
}

return 0;
}
