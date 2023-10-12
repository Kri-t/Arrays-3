#include <iostream>
using namespace std;

int main() {
    int a[] = {3,2,3,5,2,6,5,6};
    for(int i=0; i<8; i++) {
        int count = 1;
        for(int j=0; j<8; j++) {
            if(i!=j && a[i]==a[j]) {
                count++;
                break;
            }
        }
        if(count == 1) {
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<"No repeating elements"<<endl;
}
