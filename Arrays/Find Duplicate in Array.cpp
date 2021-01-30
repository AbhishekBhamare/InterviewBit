// https://www.interviewbit.com/problems/find-duplicate-in-array/

int Solution::repeatedNumber(const vector<int> &A) {
    int mi=INT_MAX, mx=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]<mi){
            mi=A[i];
        }
        if(A[i]>mx){
            mx=A[i];
        }
    }
    int a=0;
    for(int i=mi; i<mx+1; i++){
        a^=i;
    }
    int b=0;
    for(int i=0; i<A.size(); i++){
        b^=A[i];
    }
    return a^b;
}
