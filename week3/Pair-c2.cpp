#include<iostream>
#include<set>
using namespace std;
int main() {
    int n,k,s;
    cin>>n>>k;
    set<int> arr;
    for ( int i=0; i<n; i++ ) {
        cin>>s;
        arr.insert(s);
    }
    int check =0;
    for ( set<int>::iterator i=arr.begin(); i!=arr.end(); i++ ) {
        if (arr.find(*i + k) != arr.end()) {
            check ++;
        }
    }
    cout<< check<< endl;
}