vector<int> solution(int N, vector<int>& A) {
    vector<int> counters(N);
    int max = 0;
    int fixed = 0;

    for (int a : A) {
        if (a > N) {
            fixed = max;
            continue;
        }

        int idx = a - 1;
        counters[idx] = fixed > counters[idx] ? fixed + 1 : counters[idx] + 1;

        if (max < counters[idx])
            max = counters[idx];
    }

    for (int i = 0; i < N; i += 1) {
        if (counters[i] < fixed)
            counters[i] = fixed;
    }

    return counters;
}