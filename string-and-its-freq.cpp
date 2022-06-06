string Solution::solve(string A) {
//     map<char ,int>mp;
//     for(int i=0;i<A.size();i++){
//         mp[A[i]]++;
//     }
//     string res="";
//     for(int i=0;i<A.size();i++){
//         if(mp[A[i]]>0){
//         res+=A[i];
//         res+=to_string(mp[A[i]]);
//         mp[A[i]]=0;
//         }
//     }
//     return res;
// }
    map<char, int> frequency;
    map<char,int>::iterator it;
    string ans = "";
    int i = 0;
    for(char c:A)
        frequency[c]++;
    for(int i=0; i<A.size(); i++){
        if(frequency[A[i]]>0){
            ans += A[i];
            ans += to_string(frequency[A[i]]);
            frequency[A[i]] = 0 ;
        }
    }

    return ans;
}
