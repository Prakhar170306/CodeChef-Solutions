/*
Problem: Welcome to the  AI Tutor
Problem Code: SST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B;
cin >> A >> B;

if (2 * A > B)
cout << "FIRST" << endl;
else if (2 * A < B)
cout << "SECOND" << endl;
else
cout << "ANY" << endl;
}

return 0;
}
