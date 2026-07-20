/*
Problem: Welcome to the  AI Tutor
Problem Code: WATERFILLING
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int B1, B2, B3;
cin >> B1 >> B2 >> B3;

int empty = 0;

if (B1 == 0) empty++;
if (B2 == 0) empty++;
if (B3 == 0) empty++;

if (empty >= 2)
cout << "Water filling time" << endl;
else
cout << "Not now" << endl;
}

return 0;
}
