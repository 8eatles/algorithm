vector<int> solution(vector<int> &A, int K) {
    if (!A.size()) return A;

    int n = A.size() - (K % A.size());
    
    vector<int> b;
    b.insert(b.end(), A.begin() + n, A.end());
    b.insert(b.end(), A.begin(), A.begin() + n);
    
    return b;
}
