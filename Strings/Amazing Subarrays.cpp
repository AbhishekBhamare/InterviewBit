// https://www.interviewbit.com/problems/amazing-subarrays/

int Solution::solve(string A) {
    int ans=0, cnt=0;
    unordered_set<char>s={'A','E','I','O','U','a','o','e','i','u'};
    for(int i=A.size()-1; i>=0; --i){
        ++cnt;
        if(s.find(A[i])!=s.end()){
            ans+=cnt;
        }
    }
    return ans%10003;
}
