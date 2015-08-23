#include "std_lib_facilities.h"

int main() {
    constexpr double yen_per_dollar = 122.26;     // setup the exchange rate
    constexpr double kroner_per_dollar = 6.55;
    constexpr double pounds_per_dollar = 0.64;
    constexpr double yuan_per_dollar = 6.39;

    double amount = 1;                            // preset the amount

    char currency = ' ';                          // preset the currency

    cout << "Please enter an amount followed by the currency (y or k or p or u(yuan) ):\n";
    cin >> amount >> currency;

    switch (currency) {
    case 'y':
        cout << amount << " yen == $" << amount/yen_per_dollar << '\n';
        break;
    case 'k':
        cout << amount << " kroner == $" << amount/kroner_per_dollar << '\n';
        break;
    case 'p':
        cout << amount << " pounds == $" << amount/pounds_per_dollar << '\n';
        break;
    case 'u':
        cout << amount << " yuan == $" << amount/yuan_per_dollar << '\n';
        break;
    default:
        cout << "Unknown currency: " << currency << '\n';
        break;
    }
}
