 int Solution::solve(vector<int> &A, int B) {
    int n = A.size()-1;
    int sum1 = 0;
    for(int i=0;i<B;i++)
        sum1 +=A[i];
    int maxsum=sum1;
    int count_end =n, count_start=B-1;
    while(inc!=n-B)
    {
        sum1 +=A[count_end--];
        sum1 -=A[count_start--];
        maxsum=max(maxsum,sum1);
    }
    return maxsum;
 }

// int Solution::solve(vector<int> &A, int B) {
//     int count_start = 0,count_end = B, start_sum = 0, end_sum = 0;
//     int size = A.size();
//     for(int i =0; i<size; i++){
//         if(count_start<B){
//             count_start++;
//             start_sum += A[i];
//             //printf(start_sum);
//             //continue;
//         }
//         if(i+count_end==size){
//             count_end--;
//             end_sum += A[i];
//             //cout<<start_sum<<" "<<count<<endl;
//             continue;
//         }
//     }
//     return (start_sum>end_sum?start_sum:end_sum);
// }
