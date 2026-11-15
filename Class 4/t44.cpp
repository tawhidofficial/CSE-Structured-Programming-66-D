# include<iostream>
using namespace std;

double calculateBill(int units, double ratePerUnit, char connectionType) {
    double baseAmount = units * ratePerUnit;

if (connectionType == 'C' || connectionType == 'c') {
        return baseAmount + (baseAmount * 0.15);
    }
    return baseAmount;

}

int main() {
    int unitsUsed;
    double rate;
    char type;

    cin >> unitsUsed >> rate >> type ;

    double payable = calculateBill(unitsUsed, rate, type);
    
    cout << "Total Payable Bill = "<< payable << " BDT" << endl;

    return 0;
}