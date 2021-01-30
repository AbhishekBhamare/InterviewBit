// https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string A) {
    string s="";
    for(int i=0; A[i]; i++){
        if(isalpha(A[i])){
            s+=A[i];
        }
    }
    transform(s,begin(), s.end(), s.begin(), ::tolower);
    int i=0, j=s.size()-1;
    int cnt=0;
    while(i<j){
        if(s[i]==s[j]){
            ++cnt;
        }
        ++i;
        --j;
    }
    if(cnt==s.size()/2){
        return 1;
    }
    return 0;
    
}
