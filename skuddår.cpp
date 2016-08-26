#include <iostream>
using namespace std;

bool skuddaar(int aar){
    bool skudd;

    if (aar % 4 == 0){
        skudd = true;
    }

    if ((aar % 100 == 0) % (aar % 100 != 0)){
        skudd = false;
    }

    return skudd;
}

int main(){

    int n;

    cout << "Er det et skuddår? ";
    cin >> n;

    cout << skuddaar(n) << endl;

    return 0;
}
