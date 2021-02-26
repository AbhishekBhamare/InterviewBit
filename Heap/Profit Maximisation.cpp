// https://www.interviewbit.com/problems/profit-maximisation/

int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>p;
    for(int i=0; i<A.size(); i++){
        p.push(A[i]);
    }
    int ans=0;
    while(B){
        int temp=p.top();
        ans+=temp;
        p.pop();
        p.push(temp-1);
        --B;
    } 
    return ans;
}
