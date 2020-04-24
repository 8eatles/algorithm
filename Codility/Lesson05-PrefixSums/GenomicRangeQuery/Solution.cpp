vector<int> solution(string& S, vector<int>& P, vector<int>& Q) {
    int m = P.size();
    vector<int> result(m, 4);

    vector<int> adenines(S.length() + 1);
    vector<int> cytosines(S.length() + 1);
    vector<int> guanines(S.length() + 1);

    for (int i = 0; i < S.length(); i += 1) {
        switch (S.at(i)) {
        case 'A':
            adenines[i + 1] = adenines[i] + 1;
            cytosines[i + 1] = cytosines[i];
            guanines[i + 1] = guanines[i];
            break;
        case 'C':
            adenines[i + 1] = adenines[i];
            cytosines[i + 1] = cytosines[i] + 1;
            guanines[i + 1] = guanines[i];
            break;
        case 'G':
            adenines[i + 1] = adenines[i];
            cytosines[i + 1] = cytosines[i];
            guanines[i + 1] = guanines[i] + 1;
            break;
        case 'T':
            adenines[i + 1] = adenines[i];
            cytosines[i + 1] = cytosines[i];
            guanines[i + 1] = guanines[i];
            break;
        }
    }

    for (int i = 0; i < m; i += 1) {
        int start = P[i] + 1;
        int end = Q[i] + 1;
        if (start == end) {
            switch (S.at(start - 1)) {
            case 'A':
                result[i] = 1;
                break;
            case 'C':
                result[i] = 2;
                break;
            case 'G':
                result[i] = 3;
                break;
            }
        }
        else if (adenines[end] > adenines[start - 1]) {
            result[i] = 1;
        }
        else if (cytosines[end] > cytosines[start - 1]) {
            result[i] = 2;
        }
        else if (guanines[end] > guanines[start - 1]) {
            result[i] = 3;
        }
    }

    return result;
}