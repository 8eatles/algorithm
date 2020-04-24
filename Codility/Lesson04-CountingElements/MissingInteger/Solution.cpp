#include <algorithm>

int solution(vector<int>& A) {
    sort(A.begin(), A.end());

    int missingMin = 1;
    
    for (int i = 0; i < A.size(); i += 1) {
        if (A[i] == missingMin) {
            missingMin += 1;
        }
        else if (A[i] > missingMin) {
            return missingMin;
        }
    }

    return missingMin;
}
