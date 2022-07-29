#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] )
{
    bool numberLines = false;

    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         numberLines = true;
    for ( int i = 0; envp[i] != NULL; ++i )
    {
        if ( numberLines )
            cout << i << ": ";
        cout << envp[i] << "\n";
    }
}
