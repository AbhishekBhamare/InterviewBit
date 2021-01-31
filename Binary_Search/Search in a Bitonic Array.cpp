// https://www.interviewbit.com/problems/search-in-bitonic-array/

int Solution::solve(vector<int> &A, int B) {
    int l=0,r=A.size()-1;
    while(l<=r){
       int mid=(l+r)/2;
       if(A[mid]==B)return mid;
       if(A[mid]<=A[r]){
           if(A[mid]<B)l=mid+1;
           else r=mid-1;
       }
       else if(A[mid]>=B){
           if(A[mid]<B)r=mid-1;
           else l=mid+1;
       }
   }
   return -1;
    
    
}
