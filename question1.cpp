#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,1,0,3};
    int x = 4, count = 0;

    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            for(int k=j+1; k<5; k++) {
                if(a[i]+a[j]+a[k] == x) {
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
}