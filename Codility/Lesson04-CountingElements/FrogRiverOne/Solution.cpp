int solution(int X, vector<int>& A) {
    vector<bool> pos(X);
    int count = 0;

    for (int i = 0; i < A.size(); i += 1) {
        if (!pos[A[i] - 1]) {
            pos[A[i] - 1] = true;
            count += 1;
        }

        if (count == X) return i;
    }

    return -1;
}
