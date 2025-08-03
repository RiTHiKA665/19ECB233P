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
        cout << "Subject " << i+1 << ": ";
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
        cout << "\nDetails of student " << i+1 << ":\n";
        students[i].showdata();
    }

    return 0;
}

/* OUTPUT
Details of student 1:

Student Name: Rithika
Section: A1
Registration No: 9013
Marks: 85 75 86 2 71 
Total: 319
Average: 63
Grade: B+

Details of student 2:

Student Name: Sasidhar
Section: A1
Registration No: 627
Marks: 78 95 68 98 75 
Total: 414
Average: 82
Grade: A+

Details of student 3:

Student Name: Sashank
Section: A1
Registration No: 9009
Marks: 78 94 63 65 99 
Total: 399
Average: 79
Grade: A

Details of student 4:

Student Name: Gowri
Section: A1
Registration No: 1452
Marks: 99 98 97 96 95 
Total: 485
Average: 97
Grade: O

Details of student 5:

Student Name: Hari
Section: A1
Registration No: 9919
Marks: 99 99 98 97 95 
Total: 488
Average: 97
Grade: O */
