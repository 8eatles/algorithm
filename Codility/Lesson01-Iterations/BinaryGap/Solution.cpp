int solution(int N) {
    int current = N;
    int max = 0;
    int count = 0;
    bool started = false;
    
    while(current) {
        bool currBinary = current & 0x01;
        if (currBinary) {
            started = true;
            max = max < count ? count : max;
            count = 0;
        } else if (started) {
            count += 1;
        }
        current >>= 1;
    }
    
    return max;
}
