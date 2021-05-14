#include <iostream>
#include<iostream>
using namespace std;

int main(){
    int n = 0, cN = 0 , sN = 0 , maxN = 0;

    cin >> n;
    maxN = n;

    while (n != 0)
    {
        if (maxN < n) maxN = n;
        cN++;
        sN += n;
//        cout << cN << ' '<< sN<< endl;
        cin >> n;
    }

    cout << sN << endl;
    cout << maxN << endl;
    cout << float(sN) / cN;

    return 0;
}
