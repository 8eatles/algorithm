#include <climits>

int solution(vector<int>& A) {
    int n = A.size();

    int duoMin = INT_MAX;
    int duoMinIdx = 0;

    for (int i = 0; i < n - 1; i += 1) {
        int duo = A[i] + A[i + 1];
        if (duoMin > duo) {
            duoMin = duo;
            duoMinIdx = i;
        }
    }

    int trioMin = INT_MAX;
    int trioMinIdx = 0;

    for (int i = 0; i < n - 2; i += 1) {
        int trio = A[i] + A[i + 1] + A[i + 2];
        if (trioMin > trio) {
            trioMin = trio;
            trioMinIdx = i;
        }
    }

    return (duoMin * 3 > trioMin * 2) ? trioMinIdx : duoMinIdx;
}