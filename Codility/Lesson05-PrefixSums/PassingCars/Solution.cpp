int solution(vector<int>& A) {
    int nZero = 0;
    int result = 0;

    for (int a : A) {
        if (a) {
            result += nZero;
        }
        else {
            nZero += 1;
        }

        if (result > 1000000000) return -1;
    }

    return result;
}