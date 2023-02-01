#include <iostream>

using namespace std;

int main() 
{
    // Null terminator (\0)
    // String literal
    char name[50] = "Keshaw";
    char lastName[] = "Kumar";
    // Concatanate
    strcat(name, lastName);
    cout << name;

    return 0;
}