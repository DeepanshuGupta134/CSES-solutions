#include<bits/stdc++.h>
using namespace std ;

long long int dp[1000007];
long long int mod = 1000000007 ;
long long int fun(vector<int>&v , int sum){

    int n = v.size() ;

    if(sum == 0){
        return 1 ;
    }

    if(dp[sum] != -1){
        return dp[sum];
    }

    long long int res = 0 ;
    for(int i=0 ; i<n ; i++){
        if(v[i] <= sum){
            res = res + fun(v , sum - v[i]) ;
        }
    }

    return dp[sum] = res%mod ;
    
}

int main(){
    int n,sum ;
    cin>>n>>sum;
    memset(dp , -1 , sizeof(dp));
    vector<int>v(n);
    for(int i=0; i<n ; i++){
        cin >> v[i] ;
    }

    long long int ans = fun(v , sum) ;
    cout<<ans<<" ";
}