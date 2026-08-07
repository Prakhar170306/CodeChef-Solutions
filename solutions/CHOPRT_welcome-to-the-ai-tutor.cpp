/*
Problem: Welcome to the  AI Tutor
Problem Code: CHOPRT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
long long A, B;
cin >> A >> B;

if (A > B)
cout << ">" << endl;
else if (A < B)
cout << "<" << endl;
else
cout << "=" << endl;
}

return 0;
}
