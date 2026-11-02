#include <iostream>
#include  <cmath>
using namespace std;

double U(double x){ return sqrt(x);}
double L(double x1, double p1, double x2, double p2){
    return U(x1)*p1 + U(x2)*p2;
}

int main(){
    double x1 = 1000.0, p1 = 0.5;
    double x2 = 3000.0, p2 = 0.5;
    double x_d = 2000.0;

    double U_m = L(x1,p1,x2,p2);
    double U_d = U(x_d);

    if (U_d > U_m) {
        cout << "Obraty DRUHE mistse roboty (harantovana zarplata 2000 hrn)." << endl;
    } else if (U_m > U_d) {
        cout << "Obraty PERSHE mistse roboty." << endl;
    } else {
        cout << "Obydva varianty rivnocinni." << endl;
    }
    return 0;
}