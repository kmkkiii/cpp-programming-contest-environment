#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(int T, const std::vector<int64_t> &N, const std::vector<int64_t> &M, const std::vector<int64_t> &A, const std::vector<int64_t> &B) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    std::vector<int64_t> N(T), M(T), A(T), B(T);
    REP (i, T) {
        std::cin >> N[i] >> M[i] >> A[i] >> B[i];
    }
    auto ans = solve(T, N, M, A, B);
    REP (i, T) {
        std::cout << ans[i] << '\n';
    }
    return 0;
}
