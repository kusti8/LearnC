#include "std_lib_facilities.h"

int main()
{
    cout << "Which exercise do you want to use?\n";
    int ex;
    cin >> ex;

    if (ex == 2){
        cout << "\nConvert miles to kilometers: miles:\n";
        double miles;
        cin >> miles;
        cout << "That is " << miles*1.609 << " kilometers\n";
        return 0;
    }

    if (ex == 3){
        cout << "Not implemented yet\n";
    }
}
