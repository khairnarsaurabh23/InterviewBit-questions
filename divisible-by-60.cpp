int Solution::divisibleBy60(vector<int> &A) {

    int sum = 0;

    int zero=0;

    for(int i=0;i<A.size();i++){

        sum+= A[i];

        if(A[i]==0){

            zero = 1;

        }

    }

    if(A.size()<=2 ){

        if(zero==0){

            return 0;

        }

        if(A.size()==1 && A[0]==0){

            return 1;

        }

        else if((A[0]==0 && A[1]==6) || (A[1]==0 && A[0]==6)){

            return 1;

        }

        else{

            return 0;

        }

    }

    if((sum%3==0 || sum%9==0) && zero==1){

        return 1;

    }

    else{

        return 0;

    }

}
