#include <iostream>
#include <algorithm>
using namespace std;

struct dovat
{

    int giatri, trongluong;
    dovat(int x, int y)
    {
        trongluong = y;
        giatri = x;
    }
};

bool sosanh(dovat a, dovat b)
{
    double x = (double)a.trongluong / a.giatri;
    double y = (double)b.trongluong / b.giatri;
    return x < y;
}

double max(dovat arr[], int N, int size)
{
    sort(arr, arr + size, sosanh);
    int tongtrongluong = 0;
    double tonggiatri = 0.0;
    int n = N;
    for (int i = 0; i < size; i++)
    {
        if (tongtrongluong + arr[i].trongluong <= N)
        {

            tongtrongluong += arr[i].trongluong;
            tonggiatri += arr[i].giatri;
        }
    }
    return tonggiatri;
}
int main()
{
    int N = 60;

    // Given weights and values as a pairs
    dovat arr[] = {{100, 15},
                   {280, 40},
                   {120, 20},
                   {120, 24}};

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size, sosanh);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].giatri << ' ' << arr[i].trongluong << endl;
    }
    // Function Call
    cout << max(arr, N, size);
    return 0;
}