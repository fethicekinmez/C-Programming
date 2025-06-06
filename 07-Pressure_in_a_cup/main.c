#include <stdio.h>
#include <stdlib.h>

int main(){
    // Formula: P = (n * R * T) / V
    double n = 2.0; // number of moles
    const double R = 8.314; // ideal gas constant in J/(mol*K)
    double T = 300.0; // temperature in Kelvin
    double V = 0.5; // volume in cubic meters
    double P = (n * R * T) / V; // pressure in Pascals
    printf("Pressure in the cup: %.2f Pa\n", P);

    return 0;
}