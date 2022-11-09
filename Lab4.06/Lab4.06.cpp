#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S, P;
    int k, i;
    S = 5;
    i = 5;
    while (i <= 25)

    {
        P = 0;
        k = 1;
        while (k <= i)

        {
            P += k;
            k++;
        }
        S *= (sqrt((pow(i,2)+P)))/(i);
        i++;

    }
    cout << S << endl;

    S = 5;
    i = 5;
    do {
        P = 0;
        k = 1;
        do {
            P += k;
            k++;
        } while (k <= i);
        S *= (sqrt((pow(i, 2) + P))) / (i);
        i++;
    } while (i <= 25);
    cout << S << endl;

    S = 5;
    for (i = 5; i <= 25; i++)
    {
        P = 0;
        for (k = 1; k <= i; k++)
        {
            P += k;
        }
        S *= (sqrt((pow(i, 2) + P))) / (i);
    }
    cout << S << endl;

    S = 5;
    for (i = 25; i >= 5; i--)
    {
        P = 0;
        for (k = i; k >= 1; k--)
        { 
            P += k;
        }
        S *= (sqrt((pow(i, 2) + P))) / (i);
    }
    cout << S << endl;

    return 0;
}

   