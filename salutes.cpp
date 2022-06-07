long Solution::countSalutes(string A) {
    long salutes = 0, count = 0, line_count=0;
    for(int i=A.size(); i>=0; i--){
        if(A[i]=='<'){
            count++;
            continue;
        }
        // while(A[i]=='>'){
        //     line_count++;
        //     i--;
        // }
        salutes += count;
        // salutes = line_count*count;
        // line_count = 0;
    }
    //salutes += count;
    return salutes;
}
