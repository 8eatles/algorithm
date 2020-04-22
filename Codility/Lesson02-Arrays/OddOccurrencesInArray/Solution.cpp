#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i += 2) {
        if (i == A.size() - 1) return A[i];
        
        if (A[i] == A[i + 1]) continue;
        
        return (A[i] == A[i + 2]) ? A[i + 1] : A[i];
    }
    return -1;
}
