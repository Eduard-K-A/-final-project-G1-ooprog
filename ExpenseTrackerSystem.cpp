#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;



class ManageAccount
{
    private:
    unordered_map<string, string> accounts;
    string username;
    string password;

    public:
    void createAccount() 
    {
        cout << "Enter a username: ";
        cin >> username;
        cout << "Enter a password: ";
        cin >> password;

        // Check if the username already exists
        if (accounts.find(username) != accounts.end()) {
            cout << "Username already exists. Try again.\n";
            return;
        }

        // Store the username and password
        accounts[username] = password;
        cout << "Account created successfully!\n";
    }

    void login()
    {
        string username, password;

        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        // Check if the username exists and the password is correct
        if (accounts.find(username) != accounts.end() && accounts[username] == password) {
            cout << "Login successful! Welcome " << username << "!\n";
        } else {
            cout << "Invalid username or password. Try again.\n";
        }
    }
};

class User
{
    public:
    void addTransaction(transaction Transaction)
}


int main()
{
    


    return 0;
}