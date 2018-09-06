/*
    Subactivity 1.b.iv
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
    Cout << "Hello, World";
    return 0;
}

/*
    It produces the following errors, :
    -----------------------------------
    Subactivity_1_b_iv.cpp:18:5: error: use of undeclared identifier 'Cout'; did you mean 'cout'?
        Cout << "Hello, World";
        ^~~~
        cout
    /Library/Developer/CommandLineTools/usr/include/c++/v1/iostream:54:33: note: 'cout' declared here
    extern _LIBCPP_FUNC_VIS ostream cout;
                                    ^
    1 error generated.
*/