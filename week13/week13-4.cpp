//week13-4.cpp Day 1: Historian Hysteria (start)
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){//step01:input
        A.push_back(a);//step02:放到vector
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
        ans+=abs(A[i]-B[i]);
    }
    cout<<"答案是: "<<ans;
}