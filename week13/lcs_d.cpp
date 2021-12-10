
#include<iostream>
#include<string> 
using namespace std;

void longest_Common(string a, string b){  
    int n = a.size();  
    int m = b.size();
    int max_Size;    
    string subsequence = "";  
    int L[n+1][m+1];   
    
    for(int i=0; i<=n; i++)   
        L[i][0] = 0;
    for(int j=0; j<=m; j++)  
        L[0][j] = 0;
        
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1] == b[j-1]){  
                L[i][j] = L[i-1][j-1] + 1;   
            }
            else{   
                if(L[i-1][j] >= L[i][j-1])     
                    L[i][j] = L[i-1][j];
                else
                    L[i][j] = L[i][j-1];
            }
        }
    }
    
    max_Size = L[n][m];  
    
    
    cout<< max_Size;  
  
    
}
int main(){
    string a, b;
    cin>>a;
    cin>>b;
    longest_Common(a,b);
    return 0;    
}