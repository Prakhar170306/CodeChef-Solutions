/*
Problem: Welcome to the  AI Tutor
Problem Code: BUILDINGRACE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, X, Y;
cin >> A >> B >> X >> Y;

if (A * Y < B * X)
cout << "Chef\n";
else if (A * Y > B * X)
cout << "Chefina\n";
else
cout << "Both\n";
}

return 0;
}
