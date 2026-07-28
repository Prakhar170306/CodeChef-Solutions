/*
Problem: Welcome to the  AI Tutor
Problem Code: BLACKJACK
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B;
cin >> A >> B;

int x = 21 - (A + B);

if (x >= 1 && x <= 10)
cout << x << endl;
else
cout << -1 << endl;
}

return 0;
}
