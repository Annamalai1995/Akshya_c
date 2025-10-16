#include<iostream>
#include<string>
using namespace std;
int main()
{
    string username ,password;
    string retypeusername="sam",retypepassword="12345";
    bool Active=true;

    cout << "Enter username:";
    cin >> username;
    cout << "Enter Passsword";
    cin >> password;

    //check
    if((username==retypeusername && password==retypepassword) && Active)
    {
        cout << "Login Successful,Welcome to Zealous" << username << "!" << endl;

    }else{
        cout << "Login Failed";
    }


}
