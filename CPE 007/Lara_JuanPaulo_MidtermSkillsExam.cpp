#include <iostream>
#include <iomanip>
#include <cctype>>
#include <string>

#define studentsLimit 10

using namespace std;
int main()
{
    int numStudents;
    
    string name[studentsLimit];
    string studentNum[studentsLimit];
    int grades[studentsLimit][3];  
    double avg[studentsLimit];    
    string topStudent;
    double highestAvg = -1;
    
    cout << "Enter number of students: ";
    cin >> numStudents;
    if (numStudents < 1 || numStudents > studentsLimit) {
        cout << "Student Limit Exceeded. Restart program." << endl;
        return 0;
    }


    for (int i = 0; i < numStudents; i++) {
    	cout << endl;
        cout << "Enter details for student " << (i + 1) << ":\n";

        cout << "Name: ";
        cin.ignore();
        getline(cin, name[i]);

        cout << "Student Number: ";
        getline(cin, studentNum[i]);

        cout << "Enter 3 grades:\n";
        int total = 0;
        
        for (int j = 0; j < 3; j++) {
            cout << "Grade " << (j + 1) << ": ";
            cin >> grades[i][j];
            total += grades[i][j];
        }
        
        avg[i] = total / 3.0;

        if (avg[i] > highestAvg) {
            highestAvg = avg[i];
            topStudent = name[i];
        }
    }

	cout << endl;
    cout << "-------------------------------------------------------------------------------\n";
    cout << "            		    STUDENT GRADE REPORT\n";
    cout << "-------------------------------------------------------------------------------\n";
    cout << left << setw(20) << "Name" << setw(20) << "Student No." << setw(20) << "Grades" << setw(25) << "Average" << endl;
    cout <<"-------------------------------------------------------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(15) << name[i] 
             << setw(20) << studentNum[i] 
             << setw(10);
             
        for (int j = 0; j < 3; j++) {
            cout << grades[i][j] << " ";
        }
        
        cout << setw(20) << fixed << setprecision(2) << avg[i] << endl;
    }

    cout << "-------------------------------------------------------------------------------\n";
    cout << "Top Student: " << topStudent << " (Average: " << fixed << setprecision(2) << highestAvg << ")\n";
    cout << "-------------------------------------------------------------------------------\n";

    return 0;
}

