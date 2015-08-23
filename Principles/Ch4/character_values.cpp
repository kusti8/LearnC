#include "std_lib_facilities.h"

int main()
{
    int i = 0;

    while (i<26) {
        cout << char('a'+i) << '\t' << 'a'+i << '\n';
        ++i;
    }
}
