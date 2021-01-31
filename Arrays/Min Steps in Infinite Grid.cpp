// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int steps=0,x,y;
    for(int i=0; i<n-1; i++){
        x=abs(A[i]-A[i+1]);
        y=abs(B[i]-B[i+1]);
        steps+=max(x,y);
    }
    return steps;
}
