// https://www.interviewbit.com/problems/3-sum/

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    long sum=0,ans=INT_MAX;
    for(int i=0; i<A.size()-2; ++i){
        int start=i+1, end=A.size()-1;
        while(start<end){
            sum=long(A[i])+A[start]+A[end];
            if(abs(sum-B)<abs(B-ans)){
                ans=sum;
            }
            if(sum > B){
                --end;
            }else{
                ++start;
            }
        }
    }
    return ans;
}
