class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        if (A.length == 0)
            return 0;
        int RANGE_MAX = 100;
        boolean[][] values = new boolean[A.length][RANGE_MAX + 1];
        values[0][Math.abs(A[0])] = true;
        
        for(int i = 1; i < A.length; i += 1) {
            int abs = Math.abs(A[i]);
            for(int j = 0; j <= RANGE_MAX; j += 1) {
                if (values[i - 1][j]) {
                    int sum = j + abs;
                    int sub = Math.abs(j - abs);
                    if (sum <= RANGE_MAX) values[i][sum] = true;
                    values[i][sub] = true;
                }
            }
        }
        
        for(int j = 0; j <= RANGE_MAX; j += 1) {
            if (values[A.length - 1][j])
                return j;
        }

        return RANGE_MAX;
    }
}
