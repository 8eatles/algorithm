class Solution {
    public boolean isNumber(String s) {
        String noSpace = s.trim();
        if (noSpace.length() == 0) return false;
        char first = noSpace.charAt(0);
        if (first < '0' || first > '9') {
        	if (noSpace.length() == 1 || (first != '+' && first != '-' && first != '.')) {
        		return false;
        	}
        }
        boolean numericBeforeE = false;
        boolean numericAfterE = false;
    	boolean exponent = false;
    	boolean exponentedNow = false;
    	boolean point = false;
		for(int i = 0; i < noSpace.length(); i += 1) {
			char c = noSpace.charAt(i);
			if (c >= '0' && c <= '9') {
				exponentedNow = false;
				if (exponent)
					numericAfterE = true;
				else
					numericBeforeE = true;
			}
            else if (c == 'e' && i != 0 && exponent == false && i != noSpace.length() - 1)
            	exponent = exponentedNow = true;
			else if (c == '.' && exponent == false && point == false)
				point = true;
			else if (c == '+' && (i == 0 || exponentedNow))
				numericAfterE = false;
			else if (c == '-' && (i == 0 || exponentedNow))
				numericAfterE = false;
			else
				return false;
		}
		return (numericAfterE || !exponent) && numericBeforeE;
    }
}