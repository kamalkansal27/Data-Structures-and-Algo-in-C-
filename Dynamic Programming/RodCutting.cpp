int cutRod(int price[], int n) {
        //code here
        int t[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i == 0 || j == 0){
                    t[i][j] = 0;
                }
                else if(i > j){
                    t[i][j] = t[i-1][j];
                }
                else if(i <= j){
                    t[i][j] = max(t[i-1][j], price[i-1] + t[i][j-i]);
                }
            }
        }
        return t[n][n];
    }