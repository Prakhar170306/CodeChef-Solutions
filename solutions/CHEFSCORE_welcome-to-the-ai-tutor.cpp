/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFSCORE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X, Y;
cin >> N >> X >> Y;

if (Y % X == 0 && Y / X <= N)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
