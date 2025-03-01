//restaurant bill calculator program. Oladamola Ola-Buraimo. 02/24/26. This code will compute the tax and tip on a restaurant bill. The program will prompt the user for the bill amount.
#include <iostream>
#include <iomanip>

int main() {
    double bill_amount;
    std::cout << "Enter the bill amount: $";
    std::cin >> bill_amount;

    const double tax_rate = 0.0675;
    const double tip_rate = 0.2;

    double tax_amount = bill_amount * tax_rate;
    double tip_amount = bill_amount * tip_rate;
    double total_amount = bill_amount + tax_amount + tip_amount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nBill amount: $" << bill_amount << std::endl;
    std::cout << "Tax amount: $" << tax_amount << std::endl;
    std::cout << "Tip amount: $" << tip_amount << std::endl;
    std::cout << "Total amount: $" << total_amount << std::endl;

    return 0;
}
