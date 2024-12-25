//STRING REVERSAL:

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string get_string;
    cout<<"Enter a string to be reversed : ";
    getline(cin, get_string);

    int length_of_string = get_string.length();
    for(int i = 0; i<length_of_string/2; i++)
    {
        char temp = get_string[i];
        get_string[i] = get_string[length_of_string-i-1];
        get_string[length_of_string-i-1] = temp;
    }

    cout<<"The reversed string is : "<<get_string<<endl;
    
    return 0;
}