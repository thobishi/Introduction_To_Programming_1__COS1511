/*
    Subactivity 1.b.iii
    ------------------------
    What does 'using namespace std'; mean?

    - You can leave 'using namespace std' line out of your program but you need to adjust the program
    by prefixing 'cout' with 'std::'
    - As explained above, 'cout' is defined in the 'iostream' header file.
    - All the names defined in 'iostream' it belong to a namespace called 'std'.

*/
#include <iostream>

// using namespace std;

int main()
{
    std::cout << "Hello, World";
    return 0;
}