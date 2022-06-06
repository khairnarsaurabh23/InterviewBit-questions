int Solution::solve(vector<int> &A) {
    int peak = 0;
    for(int i:A){
        peak = max(i,peak);
    }
    return peak;
}
