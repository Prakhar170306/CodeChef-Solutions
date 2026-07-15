/*
Problem: Welcome to the  AI Tutor
Problem Code: INTEST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTEST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N, K;
cin >> N >> K;

int count = 0;

for (int i = 0; i < N; i++) {
int A;
cin >> A;

if (A % K == 0) {
count++;
}
}

cout << count << endl;

return 0;
}
vector snippet
virtual keyword
void keyword
volatile keyword
have local
reverse snippet
prev_permutation snippet
private keyword
remove_if snippet
