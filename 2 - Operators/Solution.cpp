#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string tmp;

    getline(cin, tmp);
    double mealCost = stod(tmp);

    getline(cin, tmp);
    int tipPercent = stoi(tmp);

    getline(cin, tmp);
    int taxPercent = stoi(tmp);

    double tip = tipPercent * mealCost / 100;
    double tax = taxPercent * mealCost / 100;

    int totalCost = (int) round(tip + tax + mealCost);
    cout<<totalCost;

    return 0;
}
