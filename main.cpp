#include <bits/stdc++.h>
using namespace std;

static unsigned long long sum_proper_divisors(unsigned long long n){
    if(n <= 1) return 0ULL;
    unsigned long long s = 1ULL;
    unsigned long long r = sqrtl((long double)n);
    for(unsigned long long i = 2; i <= r; ++i){
        if(n % i == 0){
            unsigned long long j = n / i;
            s += i;
            if(j != i) s += j;
        }
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    if(!(cin >> m)) return 0;
    for(int i = 0; i < m; ++i){
        unsigned long long n; cin >> n;
        unsigned long long s = sum_proper_divisors(n);
        cout << (s == n ? 1 : 0) << "\n";
    }
    return 0;
}
