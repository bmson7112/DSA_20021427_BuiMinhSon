#include<iostream>
using namespace std;
int P ( int n){
    if ( n < 1 || n>10) 
    {return 1;}
     return P(n-1)*(2*n +1);
}
int main()
{
    int n;
    while (true){
        cin>>n;
    if ( n >= 1 && n<=10) {
        cout<<P(n);
        return 0;
    }   
    
}
}