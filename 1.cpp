#include <iostream>
using namespace std;

double Res_w(double p, int r[]){
    return p*r[0]+(1-p)*r[1];
}

int main(){
    int Rating[2][2];
    cout << "Vedit vidchuttya vid 1 do 10\n" << "Doma koli doshch:";
    cin >> Rating[0][0];
    cout << "Doma koli nima doshchy:";
    cin >> Rating[0][1];
    cout << "V lisi koli doshch:";
    cin >> Rating[1][0];
    cout << "V lisi koli nema doshchy:";
    cin >> Rating[1][1];
    double P_rain, W_home, W_forest;
    cout << "Vedit 0 < P_rain < 1: ";
    cin >> P_rain;
    W_home = Res_w(P_rain,Rating[0]);
    W_forest = Res_w(P_rain,Rating[1]);
    if(W_home<W_forest) cout<< "Go forest";
    else cout << "Stay home";
    return 0;
}