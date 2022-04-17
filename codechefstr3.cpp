#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string stringforcodechef;
        cin>>stringforcodechef;
        ll number_of_ones[n+1]={},number_of_zeroes[n+1]={},difference_bw_one_zero;
        bool flagvariable=0;
        if(n%2==1){
            cout<<"NO\n";
        }else{
            for(int i=0;i<n;i++){
                if(stringforcodechef[i]=='1'){
                number_of_ones[i+1]=1+number_of_ones[i];
                number_of_zeroes[i+1]=number_of_zeroes[i];
                }else{
                number_of_ones[i+1]=number_of_ones[i];
                number_of_zeroes[i+1]=number_of_zeroes[i]+1;
                }
            }
            if(number_of_zeroes[n]>number_of_ones[n]){
                difference_bw_one_zero=(number_of_zeroes[n]-number_of_ones[n])/2;
                for(int i=1;i<=n;i++){
                    if(number_of_zeroes[i]-number_of_ones[i]==difference_bw_one_zero){
                    cout<<"YES\n";
                    flagvariable=1;
                    cout<<"1 "<<i<<"\n";
                    break;
                    }
                }
                if(flagvariable==0){
                    cout<<"NO\n";
                }
            }else if(number_of_zeroes[n]<number_of_ones[n]){
                difference_bw_one_zero=(number_of_ones[n]-number_of_zeroes[n])/2;
                for(int i=1;i<=n;i++){
                    if(number_of_ones[i]-number_of_zeroes[i]==difference_bw_one_zero){
                        cout<<"YES\n";
                        flagvariable=1;
                        cout<<"1 "<<i<<"\n";
                        break;
                    }
                }
                if(flagvariable==0){
                    cout<<"NO\n";
                }
            }else{
                cout<<"YES\n";
                cout<<"1 "<<n<<"\n";
            }
        }
    }
  return 0;
}