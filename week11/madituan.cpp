#include <iostream>

#define MAX 8
using namespace std;

int A[MAX][MAX] = {0};
int X[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dem = 0;
int n;

void xuat()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << ' ';
        cout << endl;
    }
    // cout << endl;
}

void diChuyen(int x, int y)
{
    ++dem;
    A[x][y] = dem;
    for (int i = 0; i < 8; i++)
    {

        if (dem == n * n)
        {
            xuat();
            exit(0);
        }
        int u = x + X[i];
        int v = y + Y[i];

        if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
            diChuyen(u, v);
    }
    --dem;
    A[x][y] = 0;
}
int main()
{

    cin >> n;
    int a, b;
    cin >> a >> b;

    diChuyen(a, b);
}