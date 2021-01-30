// https://www.interviewbit.com/problems/next-permutation/

vector<int> Solution::nextPermutation(vector<int> &A) {
    vector<int>ans;
    int i=A.size()-2;
    while(i>=0){
        if(A[i]<A[i+1]){
            break;
        }
        --i;
    }
    if(i==-1){
        reverse(A.begin(), A.end());
        ans=A;
        return ans;
    }
    int j=A.size()-1;
    while(j>i){
        if(A[j]>A[i]){
            break;
        }
        --j;
    }
    swap(A[i], A[j]);
    reverse(A.begin()+i+1, A.end());
    ans=A;
    return ans;
}
