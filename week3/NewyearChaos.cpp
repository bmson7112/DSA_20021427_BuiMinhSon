#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int m;
        cin>>m;
        int a[m];
        for( int j=0; j<m; j++) {
            cin >> a[j];
        }
        int count = 0;
        for( int l = m-1; l >= 0; l--) {
            int k = l;
            while( a[k] != l+1) {
                k--;
            }
                if( l - k > 2) {
                    count = -1;
                    break;
                }
                else {
                    while( k != l ) {
                        swap(a[k], a[k + 1]);
                        k++;
                        count++;
                    }
                }
        }
        if ( count == -1 ) {
            cout<<"Too chaotic"<<endl;
        }else {
            cout<< count<<endl;
        }
    }
    return 0;
}