#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>> n;
    stack<int> s1,s2;
     int a,b;
    for( int i=0; i<n; i++ ){
        cin>> a;
        if( a == 1){
            cin>>b;
            s1.push(b);
        }
        if ( a == 2 ){
            if( !s2.empty() ){
                s2.pop();
            }else {
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                s2.pop();
            }
        }
        if ( a == 3){
            if( !s2.empty() ){
                cout<<s2.top()<<endl;
            }else {
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                cout<<s2.top()<<endl;
            }
        }
    }
}