// https://www.interviewbit.com/problems/pairs-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    int ans=0;
    
    map<int,int>mp;
    for(int&i:A){
        if(mp.find(i^B)!=mp.end()){
            ++ans;
        }
        mp[i]++;
    }
    return ans;
}
