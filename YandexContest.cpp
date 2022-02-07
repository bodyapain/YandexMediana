

#include <iostream>
using namespace std;

int main()
{
    int k;
    int temp=0;
    bool flag = 0;
    int max = 0, min = 0;
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (i == 0) {
            
            max = a[i];
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
            temp = i;
        }

       
    }
    if (a[0] == a[1] && a[0] == a[2] ) {
        for (int i = 0; i < 3; i++) {
            cout << "YES" << endl;
        }
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] != max && a[i] != min) {
            temp = i;
        }
       
    }
    for (int i = 0; i < 3; i++) {
        flag = 0;
        if (a[i] != max && a[i] != min) {
            cout << "YES" << endl;
            flag = 1;
            continue;
        }
        if (a[i] == min)
        {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (k == j) {
                        continue;
                    }
                    if (k == i) {
                        continue;
                    }
                    if (a[k] - a[j] <= min) {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }                    
                }
                if (flag == 1) {
                    break;
                }
            }
        }
        if (a[i] == max) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (k == j) {
                        continue;
                    }
                    if (k == i) {
                        continue;
                    }
                    if (a[k] - a[j] >= max) {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    break;
                }
            }
            if (flag == 1) {
                continue;
            }
            for (int j = 0; j < 3; j++) {
                if (j == i) {
                    continue;
                }
                for (k = 0; k < 3; k++) {
                    if (k != i && k != j) {
                        break;
                    }
                }
                if (a[i] - a[j] >= min && a[i] - a[j] <= a[temp]) {
                    cout << "YES"<<endl;
                    flag = 1;
                    break;
                }
            }
           
            
        }
        if (flag == 0) {
            cout << "NO" << endl;
        }
    }
}