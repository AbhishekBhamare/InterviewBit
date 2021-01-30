// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int curr=A[0], ans=A[0];
    for(int i=1; i<A.size(); i++){
        if(curr+A[i]>A[i]){
            curr+=A[i];
        }
        else{
            curr=A[i];
        }
        if(curr>ans){
            ans=curr;
        }
    }
    return ans;
}
