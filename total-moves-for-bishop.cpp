int Solution::solve(int a, int b) {
    int q1 = min(a - 1, b - 1);
    int q2 = min(8 - a, 8 - b);
    int q3 = min(8 - a, b - 1);
    int q4 = min(a - 1, 8 - b);
    return q1 + q2 + q3 + q4;
}
