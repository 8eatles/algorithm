#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    if (A[0] != 1) return 0;
    
    for(int i = 1; i < A.size(); i += 1) {
        if (A[i] - A[i - 1] != 1) return 0;
    }
    
    return 1;
}
