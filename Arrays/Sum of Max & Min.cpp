// https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/

int Solution::solve(vector<int> &A) {
    int mi=INT_MAX;
    int mx=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]<mi){
            mi=A[i];
        }
        if(A[i]>mx){
            mx=A[i];
        }
    }
    if(mi<0){
        return mx+mi;
    }
    else
       return mx-mi;
}
