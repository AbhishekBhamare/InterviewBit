// https://www.interviewbit.com/problems/colorful-number/

int Solution::colorful(int A) {
    if(A==NULL){
        return 0;
    }
    vector<int>v;
    while(A){

        v.push_back(A%10);
        A/=10;
    }
    int temp;
    map<int,int>mp;
    for(int i=0; i<v.size(); i++){
        temp=1;
        for(int j=i; j<v.size(); j++){
            temp*=v[j];
            if(mp.find(temp)!=mp.end()){
                return 0;
            }
            mp[temp]=j;
        }
    }
    return 1;
}
