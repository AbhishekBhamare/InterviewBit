// https://www.interviewbit.com/problems/k-largest-elements/ 

vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int, vector<int>, greater<int>>heap;
    for(int i=0; i<A.size(); i++){
        heap.push(A[i]);
        if(heap.size()>B){
            heap.pop();
        }
    }
    vector<int>ans;
    while(!heap.empty()){
        ans.push_back(heap.top());
        heap.pop();
    }
    return ans;
}
