int Solution::solve(int A) {
    int a[A+1];memset(a,0,sizeof(a));a[0]=1;int M=1000000007;
    for(int i=1;i<A+1;i++){
         for(int j=1;j<=6;j++){
           if(i>=j)  a[i]=(a[i]%M+a[i-j]%M)%M;
         }
    }return a[A];
