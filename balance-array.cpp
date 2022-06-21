int Solution::solve(vector<int> &A) {
    int n=A.size();
    int cntodd=0,cnteven=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i%2==0) cntodd+=A[i];
        else cnteven+=A[i];
    }
    int prev_odd=0,prev_even=0;
    for(int i=0;i<n;i++){
        if(i%2==0) {
            //odd
            int curr_even=prev_even+cntodd-prev_odd-A[i];
            int curr_odd=prev_odd+cnteven-prev_even;
            if(curr_even==curr_odd) ans++;
            prev_odd+=A[i];
        }
        else{
            // even
            int curr_even=prev_even+cntodd-prev_odd;
            int curr_odd=prev_odd+cnteven-prev_even-A[i];
            if(curr_even==curr_odd) ans++;
            prev_even+=A[i];
        }
    }
        return ans;
