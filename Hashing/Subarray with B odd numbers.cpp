// https://www.interviewbit.com/problems/subarray-with-b-odd-numbers/

int Solution::solve(vector<int> &A, int B) {
   int prefix[A.size()+1]={0};
   int odd=0;
   int ans=0;
   for(int i=0; i<A.size(); i++){
       prefix[odd]++;
       if(A[i]&1){
           ++odd;
       }
       if(odd>=B){
          ans+=prefix[odd-B];
       }
   }
   return ans;
}
