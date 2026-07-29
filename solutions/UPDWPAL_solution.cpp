/*
Problem: CodeChef Solution
Problem Code: UPDWPAL
Platform: CodeChef
URL: https://www.codechef.com/START249D/problems/UPDWPAL
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int n;
cin >> n;

vector<long long> a(n);
for (auto &x : a) cin >> x;

long long L = -1e18, R = 1e18;
bool ok = true;

for (int i = 0; i < n / 2; i++) {
long long x = a[i];
long long y = a[n - 1 - i];

if (x > y) swap(x, y);

long long d = y - x;

if (d == 0) continue;

if (d == 2) {
L = max(L, x);
R = min(R, x + 1);
} else {
ok = false;
break;
}
