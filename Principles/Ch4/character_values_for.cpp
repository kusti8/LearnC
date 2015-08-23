#include "std_lib_facilities.h"

int main() {
    for (int i = 0; i<26; ++i) {
        cout << char('a'+i) << '\t' << 'a'+i << '\n';
        cout << char('A'+i) << '\t' << 'A'+i << '\n';
    }
    for (int i = 0; i<10; ++i) {
        cout << char('0'+i) << '\t' << '0'+i << '\n';
    }
}
