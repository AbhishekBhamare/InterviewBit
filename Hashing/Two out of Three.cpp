// https://www.interviewbit.com/problems/two-out-of-three/

vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
   map<int,int>ma,mb,mc;
   for(int&i:A) ma[i]++;
   for(int&i:B) mb[i]++;
   for(int&i:C) mc[i]++;
   
   map<int,int>mp;
   for(auto&i:ma) mp[i.first]++;
   for(auto&i:mb) mp[i.first]++;
   for(auto&i:mc) mp[i.first]++;
   
   vector<int>ans;
   for(auto&i:mp){
       if(i.second>1){
           ans.push_back(i.first);
       }
   }
   return ans;

}
