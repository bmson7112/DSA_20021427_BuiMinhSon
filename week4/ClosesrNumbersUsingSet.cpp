#include<iostream>
#include<unordered_set>
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
int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_set<int>arr;
    for( int i=0; i<n; i++){
        cin>>a[i];
        arr.insert(a[i]);
    }
    sort(a,a+n);
    for ( unordered_set<int>::iterator i=arr.begin(); i!=arr.end(); i++ ) {
        if (arr.find(*i + Min(a,n)) != arr.end()) {
            cout<< *i << " "<< *i + Min(a,n)<<" ";
        }
    }

}