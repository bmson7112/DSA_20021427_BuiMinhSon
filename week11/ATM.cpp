#include<iostream>

using namespace std;


int main() {
    int n;
    cin>>n;
    n/=1000;
    int m =8;
    int a[m] ;
    int b[m] = {500,200,100,50,20,10,2,1};
    for( int i = 0; i < m; i++) {
        a[i] = n / b[i];
        n = n - a[i]*b[i];
        if( n < 0 ) break;
    }


    for ( int i = 0; i < m; i++) {
        cout<<b[i]<<"k:"<<a[i] << endl;
    }
}
