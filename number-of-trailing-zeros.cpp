int trailingZeroes(int A) {
    int num1 = 0;
    while(1){
        if(A<5)
            return num1;
        else{
            num1 += A/5;
            A = A/5;
        }
    }
}
