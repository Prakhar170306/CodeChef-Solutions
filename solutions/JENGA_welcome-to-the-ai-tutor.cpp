/*
Problem: Welcome to the  AI Tutor
Problem Code: JENGA
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

if (X % N == 0)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
