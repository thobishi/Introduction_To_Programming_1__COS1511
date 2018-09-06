/*
    Subactivity 1.b.v
    ------------------------
    What does 'using namespace std'; mean?

    - You can leave 'using namespace std' line out of your program but you need to adjust the program
    by prefixing 'cout' with 'std::'
    - As explained above, 'cout' is defined in the 'iostream' header file.
    - All the names defined in 'iostream' it belong to a namespace called 'std'.

*/
#include <iostream>

using namespace std;

int main()
{
    cout << 'Hello, World";
    return 0;
}

/*
    It produces the following errors, :
    -----------------------------------
    Subactivity_2_b_v.cpp:18:13: warning: missing terminating ' character [-Winvalid-pp-token]
        cout << 'Hello, World";
                ^
    Subactivity_2_b_v.cpp:18:13: error: expected expression
    1 warning and 1 error generated.
*/