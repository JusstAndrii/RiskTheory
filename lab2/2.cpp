#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p[4] = {0.2, 0.3, 0.1, 0.4};
    double losses[4] = {300, 100, 200, 400};

    double m = 0;
    for(int i = 0; i < 4; i++) m += losses[i] * p[i];

    double V = 0;
    double ssv_sum = 0;
    for(int i = 0; i < 4; i++) {
        double diff = losses[i] - m;
        V += pow(diff, 2) * p[i];
        
        if(losses[i] > m) ssv_sum += pow(losses[i] - m, 2) * p[i];
    }

    double sigma = sqrt(V);
    double cv = sigma / m;
    double ssv = sqrt(ssv_sum);
    double csv = ssv / m;

    cout << "spodivani zbytky M(X) = " << m << " hrosh. od." << endl;
    cout << "dyspersiya V(X) = " << V << endl;
    cout << "serednokvadratychne vidhylennya sigma(X) = " << sigma << " hrosh. od." << endl;
    cout << "kofiytsiyent variatsiyi CV(X) = " << cv << endl;
    cout << "semikvadratychne vidhylennya SSV(X) = " << ssv << " hrosh. od." << endl;
    cout << "kofiytsiyent semivariatsiyi CSV(X) = " << csv << endl;
    return 0;
}