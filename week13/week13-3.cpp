//week13-3.cpp Day 1: Historian Hysteria (start)
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){//step01:input
        A.push_back(a);//step02:放到vector
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}