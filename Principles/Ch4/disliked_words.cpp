#include "std_lib_facilities.h"

int main() {
    vector<string> disliked = {"Broccoli", "broccoli"};
    vector<string> words;

    for (string temp; cin>>temp; )
        words.push_back(temp);
    cout << "Number of words: " << words.size() << '\n';

    bool broken = false;

    for (string i : words) {
        for (string x : disliked) {
            if (i == x) {
                cout << "BLEEP ";
                broken = true;
            }
        }
        if (broken == false)
            cout << i << ' ';
        broken = false;
    }
    cout << '\n';
}
