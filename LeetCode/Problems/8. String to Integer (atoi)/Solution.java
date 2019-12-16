class Solution {
    public int myAtoi(String str) {
        String noSpace = str.trim();
        if (noSpace.length() == 0) return 0;
        char first = noSpace.charAt(0);
        if ((first >= '0' && first <= '9') || first == '+' || first == '-') {
            boolean positive = true;
            long result = 0;
            for(int i = 0; i < noSpace.length(); i += 1) {
                char c = noSpace.charAt(i);
                if (c >= '0' && c <= '9') {
                    result *= 10;
                    result += c - '0';
                    if (positive && result > Integer.MAX_VALUE) return Integer.MAX_VALUE;
                        else if (!positive && -result < Integer.MIN_VALUE) return Integer.MIN_VALUE;
                }
                else if (c == '+' && i == 0) positive = true;
                else if (c == '-' && i == 0) positive = false;
                else break;
            }
            return (int)(positive ? result : -result);
        }
        else return 0;
    }
}