#include <iostream>
using namespace std;
int main() {
    int statues;
    int total=0;
    int printer=1;
    int days=0;
    cin>>statues;
    if (statues == 1) {
        days=1;
        cout<<days<<endl;
        return 0;
    }
    while(total != statues && total<statues) {
        if (printer<(statues/2)) {
            printer+=printer;
        } else {
            total+=printer;
        }
        days++;
    }
    cout<<days<<endl;
    return 0;
}