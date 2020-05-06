#include <algorithm>

int solution(vector<int>& A) {
    int n = A.size();
    sort(A.begin(), A.end());
    int a = A[0] * A[1] * A[n - 1];
    int b = A[n - 3] * A[n - 2] * A[n - 1];
    return a > b ? a : b;
}
