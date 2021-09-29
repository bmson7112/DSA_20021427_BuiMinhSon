#include<iostream>
#include<algorithm>
using namespace std;
int Min( int a[], int n) {
    int min = a[1] - a[0];
    for ( int i=0; i<n; i++) {
        for( int j=i+1; j<n; j++)
        {
            if ( a[j] - a[i] < min){
                min = a[j] - a[i];
            }
        }
    }
    return min;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for ( int i=0; i<n; i++) {
        for( int j=i+1; j<n; j++)
        {
            if ( a[j] - a[i] == Min(a,n)){
               cout<<a[i]<<" "<<a[j]<<" ";
            }
        }
    }
}