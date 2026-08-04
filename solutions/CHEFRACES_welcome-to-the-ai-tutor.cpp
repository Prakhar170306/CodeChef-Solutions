/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFRACES
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y, A, B;
cin >> X >> Y >> A >> B;

int ans = 2;

if (X == A || X == B)
ans--;

if (Y == A || Y == B)
ans--;

cout << ans << '\n';
}

return 0;
}
int local
int16_t keyword
int32_t keyword
int64_t keyword
int8_t keyword
uint16_t keyword
uint32_t keyword
uint64_t keyword
uint8_t keyword
