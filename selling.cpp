#include<iostream>
using namespace std;

class PlasticTransaction {
    float costPrice;
    float sellingPrice;

public:
    PlasticTransaction() {
        costPrice = 10.0;
        sellingPrice = 12.0;
    }

    float calculateProfit() {
        return sellingPrice - costPrice;
    }
};

int main() {
    PlasticTransaction transaction;

    float profit = transaction.calculateProfit();

    cout << "Kiran earned $" << profit << " on selling 1 kg of plastic." << endl;

    return 0;
}
