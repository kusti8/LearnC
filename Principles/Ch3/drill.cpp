#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "\nDear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you. Oh, I do wish you were here. It's so nice here.\n";

    cout << "\nPlease enter the name of another friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?\n";

    char friend_sex = 0;
    cout << "\nPlease enter m if the friend is male or f if the friend is female:\n";
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "\nIf you see " << friend_name << " plase ask him to call me.\n";
    }
    if (friend_sex == 'f') {
        cout << "\nIf you see " << friend_name << " plase ask her to call me.\n";
    }

    cout << "\nPlease enter the age of the person you are writing to:\n";
    int age;
    cin >> age;
    if (age <= 0) {
        simple_error("you're kidding!");
    }
    if (age >= 110){
        simple_error("you're kidding!");
    }
    cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 12){
        cout << "Next year you will be " << age+1 << '\n';
    }
    if (age == 17){
        cout << "Next year you will be able to vote.\n";
    }
    if (age > 70){
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Yours sincerely,\n\n" << "Gustav Hansen\n";
}
