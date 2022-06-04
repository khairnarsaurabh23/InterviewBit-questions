int Solution::isPalindrome(int A) {
    long long int B=0,sum=A;
    if(A<0)
        return false;
    while(sum>0){
        B=B*10+sum%10;
        sum=sum/10;
    }
    return (A==B)? true: false;
}
