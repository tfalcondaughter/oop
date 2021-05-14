#include<iostream>
#include<vector>
#include<fstream>
#include<ctime>

using namespace std;


void sort(vector<int> &data) {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.size() - 1; j++) {
            if (data[j] > data[j + 1]) {
                int n = data[j];
                data[j] = data[j + 1];
                data[j + 1] = n;
            }
        }
//        cout << data[i] << endl;
    }
}


int main() {
    srand(time(0));
    int n;
    cin >> n;
    vector<int> mas;

    for (int i = 0; i < n; i++) {
        mas.push_back(rand() % 10);
    }

    ofstream fout("test.txt");

    for (int i = 0; i < n; i++) {
        fout << mas[i] << " ";
    }
    fout << endl;
    sort(mas);


    return 0;
}

