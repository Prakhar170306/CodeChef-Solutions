/*
Problem: Welcome to the  AI Tutor
Problem Code: COURSEREG
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COURSEREG
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while (t--) {
int n, m, k;
cin >> n >> m >> k;

if (m - k >= n)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
