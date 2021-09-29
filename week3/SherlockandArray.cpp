#include<iostream>
using namespace std;
string checkSum ( int a[] , int n){
    int sum =0;
    for( int i=0; i< n; i++) {
        sum += a[i];
    }
    int sumleft =0;
    for( int i=0; i< n; i++) {
        if( sumleft == sum - sumleft - a[i]) {
            return "YES";
        }
        else{
            sumleft += a[i];
        }
    }
    return "NO";
}
int main()
{
    int n ;
    cin>>n;
    int a[n];
    string c[n];
    for( int i=0; i<n; i++) {
        cin>>a[i];
        int b[a[i]];
        for( int j=0; j<a[i]; j++) {
            cin>>b[j];
        }
        c[i] = checkSum(b,a[i]);
    }
    for( int i=0; i<n; i++) {
        cout<< c[i]<< endl;
    }
}