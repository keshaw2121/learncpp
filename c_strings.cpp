#include <iostream>

using namespace std;

int main() 
{
    // Null terminator (\0)
    // String literal
    char name[5] = "Keshaw";
    // Character literal
    name[0] = "m";
    cout << strlen(name);

    return 0;
}