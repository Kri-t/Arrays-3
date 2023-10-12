#include <iostream>
using namespace std;

int main() {
    int a[] = {4,6,0,0,7,8};
    int j = 0;
    for(int i=0; i<6; i++) {
        if(a[i]!=0) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    for(int i=0; i<6; i++) {
        cout<<a[i]<<"\t";
    }
}