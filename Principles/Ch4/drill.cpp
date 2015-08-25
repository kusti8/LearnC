#include "std_lib_facilities.h"

constexpr double cm_in_m = 100;
constexpr double cm_in_in = 2.54;
constexpr double in_in_foot = 12;

bool invalid = false;

double convert(double number, string unit) {
    if (unit == "cm")
        return number/cm_in_m;
    else if (unit == "m")
        return number;
    else if (unit == "in")
        return number*cm_in_in/cm_in_m;
    else if (unit == "ft")
        return number*in_in_foot*cm_in_in/cm_in_m;
    else {
        invalid = true;
        return 0;
    }
}

int main() {

    double int1;
    double smallest;
    double biggest;
    double sum = 0;
    vector<double> values;

    string unit = "";
    cin >> int1 >> unit;
    //cout << unit << '\n';
    //cout << int1 << '\n';
    double temp = convert(int1, unit);
    if (invalid == true) {
        cout << "Invalid unit!\n";
        invalid = false;
    } else {
        cout << convert(int1, unit) << "m\n";
        values.push_back(convert(int1, unit));
        smallest = convert(int1, unit);
        biggest = convert(int1, unit);
        sum += convert(int1, unit);
    }

    while (cin >> int1 >> unit) {
        temp = convert(int1, unit);
        if (invalid == true) {
            cout << "Invalid unit!\n";
            invalid = false;
        } else {
            cout << convert(int1, unit) << "m";
            values.push_back(convert(int1, unit));
            sum += convert(int1, unit);
            if (convert(int1, unit) < smallest) {
                smallest = convert(int1, unit);
                cout << " is the smallest so far.\n";
            } else if (convert(int1, unit) > biggest) {
                biggest = convert(int1, unit);
                cout << " is the biggest so far.\n";
            } else {
                cout << '\n';
            }
        }
    }

    cout << "The smallest value was " << smallest << "m.\nThe largest value was " << biggest << "m.\n";
    cout << "The sum of the values was " << sum << "m.\n";
    cout << "The values were: [";
    sort(values);
    if (values.size() != 0)
        cout << values[0] << 'm';
    for (double i=1; i < values.size(); ++i) {
        cout << ',' << values[i] << 'm';
    }
    cout << "].\n";
}
