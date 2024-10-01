#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string customerName;
    double distance, recordCost;
    // input section
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter distance in kilometers: ";
    cin >> distance;

    cout << "Enter the cost of records purchased: $";
    cin >> recordCost;

    // Calculations
    double deliveryCost = distance * 15;  // $15 per kilometer
    double purchaseCost = recordCost * 1.14;  // 14% sales tax
    double totalCost = deliveryCost + purchaseCost;

    // Output section
    cout << fixed << setprecision(2);  // Set precision for monetary values
    cout << "\nCustomer: " << customerName << endl;
    cout << "Delivery Cost: $" << deliveryCost << endl;
    cout << "Purchase Cost (with tax): $" << purchaseCost << endl;
    cout << "Total Cost: $" << totalCost << endl;



    return 0;
}
