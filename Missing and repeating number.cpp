vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    int n = A.size();
    int xxor = 0;
    for(int i = 0;i<n;i++){
        xxor ^= A[i];

    }
     for(int i = 1;i<=n;i++){
        xxor ^= i;
    }
    int x =0;
    int y =0;
    int rsb = (xxor) & (-xxor);
     for(int i = 0;i<n;i++){
         if((rsb & A[i])){
              x ^= A[i];
         }else{
             y ^= A[i];
         }

    }
     for(int i = 1;i<=n;i++){
         if((rsb & i)){
              x ^= i;
         }else{
             y ^= i;
         }

    }
    int cnt = 0;
     for(int i = 0;i<n;i++){
        if(x == A[i]){
           cnt++;
        }

    }
    if(cnt == 0) { 
        ans.push_back(y);
        ans.push_back(x);
    }
    else{
        
        ans.push_back(x);
        ans.push_back(y);
    }

    return ans;
}
