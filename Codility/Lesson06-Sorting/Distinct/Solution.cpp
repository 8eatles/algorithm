#include <algorithm>

int solution(vector<int>& A) {
    if (A.empty()) return 0;

    int cnt = 1;

    sort(A.begin(), A.end());

    for (int i = 1; i < A.size(); i += 1) {
        if (A[i] != A[i - 1]) cnt += 1;
    }

    return cnt;
}
