#include <iostream>
using namespace std;


int main() {
    int x,y;
    int ds = 0;
    cin>>x>>y;
    if (x % 2 == 0) {
        ds += x/2 * y;
        cout<<ds;
    }
    else if (y > 1) {
        ds += x * y / 2; //x/2 * y + y/2;
        cout<<ds;
    }
}
