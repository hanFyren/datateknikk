// veketrelowz.cpp

#include <iostream>
#include <string>
using namespace std;

string signtest(int n){
    string svar = "positivt";

    if(n < 0){
       svar = "negativt";
    }

    return svar; 
}



int main() {
    
    int n = 0;
    int sum = 0;
    int x;
    double gjennomsnitt;

        while(cin >> x && x != 999) //leser inn tall så lenge det er integers og ikke 999
    {
        n++;
        sum = sum + x;
        gjennomsnitt = sum / (double)n;
        cout << signtest(x)+ " " << gjennomsnitt << endl;
    }

    return 0;
}
