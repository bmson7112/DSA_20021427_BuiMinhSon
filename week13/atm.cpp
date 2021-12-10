#include <iostream>
#include <vector>

using namespace std;

bool Try(int i, int m, vector<int> const v, vector<int> &arr);

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> v = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};

    vector<int> arr(n, 0);
    Try(n - 1, m, v, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

bool Try(int i, int m, vector<int> const v, vector<int> &arr)
{
    if (m == 0)
    {
        return true;
    }
    if (i < 0)
    {
        return false;
    }
    if (v[i] <= m)
    {
        arr[i] = int(m / v[i]);
        m = m % v[i];
    }
    return Try(i - 1, m, v, arr);
}