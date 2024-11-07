//week09-1.c
//Leetcode 1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
        int M=accountsSize;//人數
        int N=accountsColSize[0];//帳戶
        int ans=0;
        for(int i=0;i<M;i++){//第幾個人
            int total=0;
            for(int j=0;j<N;j++){
                total+=accounts[i][j];
            }
            if(total>ans) ans=total;
        }
        return ans;
}