#include <iostream>
#include <map>

typedef struct 
{
    std::string lastName;
    std::string firstName;

    std::string address;
} User;

int main(int argc, char* argv[])
{
    std::map<int, User> users = {
        {1, {"Varoli", "Ernesto", "Tecnopolo"}},
        {2, {"Boni", "Matteo", "Viano"}}
    };

    std::cout << "Welcome to the test project" << std::endl;

    return 0;
}
