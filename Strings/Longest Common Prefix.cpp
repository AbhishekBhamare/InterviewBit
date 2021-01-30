 // https://www.interviewbit.com/problems/longest-common-prefix/
 
 string Solution::longestCommonPrefix(vector<string> &s) {
   if(s.size()==0){
       return "";
   }
   string temp=s[0];
   for(int i=1; i<s.size(); ++i){
       if(s[i].size()<temp.size()){
           temp=s[i];
       }
   }
   string ans;
   while(temp.size()){
       int cnt=0;
       for(int i=0; i<s.size(); i++){
           if(s[i].substr(0,temp.size())==temp){
               ++cnt;
           }
       }
       if(cnt==s.size()){
           return temp;
       }
       temp=temp.substr(0, temp.size()-1);
   }
   return "";
}
