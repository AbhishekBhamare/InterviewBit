
string Solution::solve(string A) {
     stack<char>s;
     for(char&i:A)
         s.push(i);
         
    int i=0;
    while(!s.empty()){
       A[i]=s.top();
       s.pop();
       ++i;
    }
    return A;
}
