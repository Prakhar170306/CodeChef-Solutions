/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFCAND
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

if (X >= N)
cout << 0 << endl;
else
cout << (N - X + 3) / 4 << endl;
}

return 0;
}
