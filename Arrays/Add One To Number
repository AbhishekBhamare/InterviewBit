// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
     int n=A.size();
     A[n-1]+=1;
     int carry=A[n-1]/10;
     A[n-1]=A[n-1]%10;
     for(int i=n-2; i>=0; i--){
         if(carry){
             A[i]+=1;
             carry=A[i]/10;
             A[i]=A[i]%10;
         }
     }
     if(carry){
         A.insert(A.begin(),1);
     }
     while(A[0]==0){
         A.erase(A.begin());
     }
     return A;
}
