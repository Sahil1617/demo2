//FIBONACII SERIES:

#include<iostream>
using namespace std;

void fibonacii_series(int n)
{
    int first_no = 0;
    int second_no = 1;

    cout<<"Fibonacci Series upto "<<n<<" terms : "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<first_no<<" ";
        int next_term = first_no + second_no;
        first_no = second_no;
        second_no = next_term;
    }

    cout<<endl;
}

int main()
{
    int no_of_terms;
    cout<<"Enter the number of terms for Fibonacci series : ";
    cin>>no_of_terms;

    if(no_of_terms <= 0)
    {
        cout<<"No. of terms should be positive!!"<<endl;
        return 1;
    }

    fibonacii_series(no_of_terms);
}