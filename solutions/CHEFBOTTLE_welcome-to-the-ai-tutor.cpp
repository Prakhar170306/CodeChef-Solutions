/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFBOTTLE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X, K;
cin >> N >> X >> K;

cout << min(N, K / X) << endl;
}

return 0;
}
