/*
Problem: Welcome to the  AI Tutor
Problem Code: MAXTASTE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int a, b, c, d;
cin >> a >> b >> c >> d;

cout << max(a, b) + max(c, d) << endl;
}

return 0;
}
