// string Solution::solve(string A) {
//     int size = sizeof(A)/sizeof(A[0]);
//     int ary[size];
//     for(int i=0; i<A.size(); i++){
//         ary[i] = A[i] - '0';
//     }
//     sort(ary[1],ary[size]);
//     return ary;
// }
string Solution::solve(string A) {
    for(int i=A.size()-2; i>=0; i--){
        if(A[i]<A[i+1]){
            reverse(A.begin()+i+1,A.end());
            for(int j=i+1; j<A.size(); j++){
                if(A[j]>A[i]){
                    swap(A[j],A[i]);
                    break;
                }
            }
            return A;
        }
    }
    return "-1";

}