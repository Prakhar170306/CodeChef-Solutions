/*
Problem: Welcome to the  AI Tutor
Problem Code: CYCLICQD
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C, D;
cin >> A >> B >> C >> D;

if (A + C == 180)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}
