#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,k;
    cin >>n>>k;
    int a[n];
     for( int i = 0; i < n; i++) {
         cin>> a[i];
     }
     sort(a,a+n);
     int count = 0;
     for( int i = 0; i < n; i++) {
         for( int j = 0; j < n; j++) {
             if( a[j] - a[i] == k){
                count++;
             }
         }
     }
     cout<< count<<endl;
}