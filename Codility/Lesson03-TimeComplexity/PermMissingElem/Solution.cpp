#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    
    for(int i = 1; i <= A.size(); i += 1) {
        if (i != A[i - 1])
            return i;
    }
    
    return A.size() + 1;
}
