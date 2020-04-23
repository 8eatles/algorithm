#include <cmath>

int solution(int X, int Y, int D) {
    double gap = (Y - X);
    return ceil(gap / D);
}
