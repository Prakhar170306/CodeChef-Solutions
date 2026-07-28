/*
Problem: Welcome to the  AI Tutor
Problem Code: MYSERVE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int P, Q;
cin >> P >> Q;

int total = P + Q;

if ((total / 2) % 2 == 0)
cout << "Alice" << endl;
else
cout << "Bob" << endl;
}

return 0;
}
