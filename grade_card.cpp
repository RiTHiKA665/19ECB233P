#include<iostream>
#include<string>
using namespace std;

class GRADE_CARD
{
    private:
        int regdno, total, avg;
        char name[20];
        char section[3];
        int marks[5];
        string grade;

    public:
        void getdata();
        void calculate();
        void showdata();
};

void GRADE_CARD::getdata()
{
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter section: ";
    cin >> section;
    cout << "Enter registration number: ";
    cin >> regdno;
    cout << "Enter marks of 5 subjects:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i+1 ;
        cin >> marks[i];
    }
}

void GRADE_CARD::calculate()
{
    total = 0;
    for(int i = 0; i < 5; i++)
        total += marks[i];

    avg = total / 5;

    if(avg >= 90)
        grade = "O";
    else if(avg >= 80)
        grade = "A+";
    else if(avg >= 70)
        grade = "A";
    else if(avg >= 60)
        grade = "B+";
    else if(avg >= 50)
        grade = "B";
    else
        grade = "C";
}

void GRADE_CARD::showdata()
{
    cout << "\nStudent Name: " << name;
    cout << "\nSection: " << section;
    cout << "\nRegistration No: " << regdno;
    cout << "\nMarks: ";
    for(int i = 0; i < 5; i++)
        cout << marks[i] << " ";
    cout << "\nTotal: " << total;
    cout << "\nAverage: " << avg;
    cout << "\nGrade: " << grade << endl;
}

int main()
{
    GRADE_CARD students[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for student " << i+1 << ":\n";
        students[i].getdata();
        students[i].calculate();
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "\nDetails of student " << i+1;
        students[i].showdata();
    }

    return 0;
}
