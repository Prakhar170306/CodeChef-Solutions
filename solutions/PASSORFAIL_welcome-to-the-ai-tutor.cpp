/*
Problem: Welcome to the  AI Tutor
Problem Code: PASSORFAIL
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X, P;
cin >> N >> X >> P;

int score = 3 * X - (N - X);

if (score >= P)
cout << "PASS" << endl;
else
cout << "FAIL" << endl;
}

return 0;
}
if keyword
copy_if snippet
find_if snippet
set_difference snippet
count_if snippet
remove_if snippet
sizeof keyword
alignof keyword
