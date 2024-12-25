//STUDENT GRADE CALCULATOR :

#include <iostream>
using namespace std;

int main() 
{
    int no_of_subjects;

    cout << "Enter the number of subjects : ";
    cin >> no_of_subjects;

    double grades[no_of_subjects];

    for (int i = 0; i < no_of_subjects; ++i) 
    {
        cout<<"Enter the grade for subject " << i + 1 << " : ";
        cin>>grades[i];
    }

    double total = 0;
    for (int i = 0; i < no_of_subjects; ++i) 
    {
        total += grades[i];
    }

    double avg_grade = total / no_of_subjects;

    cout<<"Average grade : "<<avg_grade<<endl;

    return 0;
}
