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

    for(auto const& userEntry: users)
    {
        std::cout << "User #" << userEntry.first << ":" << std::endl;
        std::cout << "\tName: " << userEntry.second.lastName << " " << userEntry.second.firstName << std::endl;
        std::cout << "\tAddress: " << userEntry.second.address << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Welcome to the test project" << std::endl;

    return 0;
}
