/*
Problem: CodeChef Solution
Problem Code: GPUBUY
Platform: CodeChef
URL: https://www.codechef.com/START249D/problems/GPUBUY
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, Z;
cin >> X >> Y >> Z;

if (Z <= Y) {
cout << -1 << endl;
continue;
}

int months = (X + Z - Y - 1) / (Z - Y);
cout << months << endl;
}

return 0;
}
