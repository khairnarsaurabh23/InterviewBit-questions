vector<string> Solution::deserialize(string A) {
    vector<string>ans;string curr="";
    for(int i=0;i<A.size();i++){
        if(A[i]>=97 and A[i]<=122){
            curr+=A[i];
        }else{
            if(curr!="")
                ans.push_back(curr);
                curr="";
            }
    }
    return ans;
}


// vector<string> Solution::deserialize(string A) {
//     string s = "";
//     vector<string> ans;
//     int size = 0;
//     for(char c:A){
//         if(c=='~'){
//             if(size>10){
//                 s.erase(size-2);
//             }
//             else
//                 s.erase(size-1);
//             ans.push_back("s");
//             s = "";
//             size = 0;
//             cout<<endl;
//             continue;
//         }
//         s += c;
//         size++;
//         cout<<size;
//         // if(typeid(c).name())
//         // s += A[i++];
//         // if()
//     }

// }

