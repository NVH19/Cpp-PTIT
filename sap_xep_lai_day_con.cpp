#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1],b[n+1];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++){
            if(a[i]!=b[i]){
                cout << i+1 << " ";
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]!=b[i]){
                cout << i+1 ;
                break;
            }
        }
        cout << endl;
    }
}