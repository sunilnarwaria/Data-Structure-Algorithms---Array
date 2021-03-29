// interviewbit

int Solution::maximumGap(const vector<int> &a) {
    int n = a.size();
    int right[n];
    right[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--) right[i] = max(right[i+1], a[i]);
    int ans = 0;
    int i = 0; int j=0;
    while( i<n  && j<n ){
        if( a[i] <= right[j]){
            ans = max(ans, j-i);
            j++;
        }
        else i++;
    }
    return ans;
}
