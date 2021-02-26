// https://www.interviewbit.com/problems/maximum-sum-combinations/

vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(), A.end(),greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    priority_queue<int, vector<int>, greater<int>>heap;
    for(auto&i:A){
        for(auto&j:B){
            int val=i+j;
            if(heap.size()<C){
                heap.push(val);
            }
            else{
                if(val>heap.top()){
                    heap.pop();
                    heap.push(val);
                }
                else{
                    break;
                }
            }
        }
    }
    vector<int>ans(C);
    for(int i=C-1; i>=0; i--){
        ans[i]=heap.top();
        heap.pop();
    }
    return ans;
}
