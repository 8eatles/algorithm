class Solution {
    public static int solution(int K, int A[]) {
		int curr = 0;
		int cnt = 0;
		for(int rope : A) {
			curr += rope;
			if (curr >= K) {
				cnt += 1;
				curr = 0;
			}
		}
		
		return cnt;
	}
}