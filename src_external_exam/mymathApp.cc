#include <iostream>
#include "zlib.h"

using namespace std;

int main(int argc, char const *argv[])
{
    char const* ver = zlibVersion ();

    cout << "zlib ver: " <<ver <<endl;
    return 0;
}
