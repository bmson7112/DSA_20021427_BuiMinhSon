#include <iostream>
#include <stack>
#include <string>

using namespace std;

string append_1(stack<string>&, string);
string delete_2(stack<string>&, string);
void print_3(string const);
string undo_4(stack<string>&);

void SimpleTextEditor(stack<string> &, string&, int);
int main()
{
    string str;
    cin >> str;
    stack<string> mystack;
    mystack.push(str);
    int n;
    cin >> n;
    for (int i =0; i < n; i++){
        int x;
        cin >> x;
        SimpleTextEditor(mystack, str, x);
    }
    return 0;
}
string append_1(stack<string>& mystack, string s)
{
    string str;
    cin >> str;
    mystack.push(s + str);
    return s + str;
}
string delete_2(stack<string>& mystack, string s)
{
    int k;
    cin >> k;
    k = s.length() - k;
    s.erase(s.begin()+k, s.end());
    mystack.push(s);
    return s;
}
void print_3(string const s)
{
    int k;
    cin >> k;
    if (k < 0 || k > s.length()){}
    else
        cout << s[k-1] << "\n";
}
string undo_4(stack<string>& mystack)
{
    mystack.pop();
    if (mystack.empty()){
        return "";
    }
    return mystack.top();
}
void SimpleTextEditor(stack<string> &mystack, string &str, int x)
{
    if (x == 1){
        str = append_1(mystack, str);
    }else
    if(x == 2){
        str = delete_2(mystack, str);
    }else
    if(x == 3){
        print_3(str);
    }else
    if (x == 4){
        if (!mystack.empty())
            str = undo_4(mystack);
    }
    cout << str << "\n";
}
