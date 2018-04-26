#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "[IN ] " << __func__ << endl;

    if (argc > 1)
    {
        try {
        }
        catch (...)
        {
            cout << "Bad parameters ... " << endl;
            cout << "Exiting" << endl;
            return -1;
        }
    }

    cout << "[OUT] " << __func__ << endl;
    return 0;
}

