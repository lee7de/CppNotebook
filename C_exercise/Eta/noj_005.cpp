#include <iostream>
using namespace std;
 
int noj_005()
{
    int N;
    cout << "请输入数据：";
    cin >> N;
    if ((N > 10000 && N < 100000) && (N / 10000 == N % 10) && (N / 1000 % 10 == N / 10 % 10))
        cout << "yes";
    else if ((N > 1000 && N < 10000) && (N /1000 == N % 10) && (N / 100 % 10 == N / 10 % 10))
        cout << "yes";
    else if ((N > 100 && N < 1000) && (N / 100 == N % 10))
        cout << "yes";
    else if ((N > 10 && N < 100) && (N / 10 == N % 10))
        cout << "yes";
    else if ((N > 0 && N < 10))
        cout << "yes";
    else
        cout << "no";
    return 0;
}