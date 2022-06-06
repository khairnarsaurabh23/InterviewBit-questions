void Solution::sortColors(vector<int> &A) {
    int n = A.size();
    
    int hash[3] = {0};
    
    for(int i=0;i<n;i++)
        hash[A[i]]++;
        
    int k = 0;
    for(int i=0;i<3;i++) {
        int j=0;
        while(j<hash[i]) {
            A[k++] = i;
            j++;
        }
    }

}

