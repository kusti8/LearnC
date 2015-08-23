#include "std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollar = 122.26;     // setup the exchange rate
    constexpr double kroner_per_dollar = 6.55;
    constexpr double pounds_per_dollar = 0.64;

    double amount = 1;                            // preset the amount

    char currency = ' ';                          // preset the currency

    cout << "Please enter an amount followed by the currency (y or k or p):\n";
    cin >> amount >> currency;

    if (currency == 'y')
        cout << amount << " yen == $" << amount/yen_per_dollar << '\n';
    else if (currency == 'k')
        cout << amount << " kroner == $" << amount/kroner_per_dollar << '\n';
    else if (currency == 'p')
        cout << amount << " pounds == $" << amount/pounds_per_dollar << '\n';
    else
        cout << "Unknown currency: " << currency << '\n';
}
