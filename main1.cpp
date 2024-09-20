#include <iostream>
using namespace std;

int main1() {
    int n;
    long double silnia = 1;
    cout<<"Podaj liczbe: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
      silnia*= 1;
    }
    cout<<silnia;
    return 0;
}