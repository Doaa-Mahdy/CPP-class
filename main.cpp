//Rwan Ashraf AbdelAzim 221001757
//Ebrahim Mohamed Elessawy 221001850
//Malak Mohamed Shams Eldin 221001692
//Doaa Mahdy Agha 221000424
#include <iostream>
#include <string>
#include "student.h"
using namespace std;
int main()
{
cout << "For undergraduate student (1) and for postgraduate (2)" << endl;
int PG_students;
cin>>PG_students;
// undergrad students input and displaying function

if( PG_students== 1)
{
// input the student number and declares a pointer variables and its type of the respective class

cout << "Enter students number" << endl;
int n_students;
cin>> n_students;
CStudent* student_info= new CStudent[n_students];
CPG_Student* student_jobs= new CPG_Student[n_students];

// iteration over the array pointer var that executes the function registerStudent() and save it in the array
for (int i = 0 ;i< n_students ; i++)
{
cout<< endl <<"Enter the "<< i+1 << " student info "<< endl<<endl;
student_info[i].registerStudent();
}
// iteration over the students number that displays the data in the array
for (int i = 0 ;i<n_students ; i++)
{
cout<< endl <<"Displaying the "<< i+1 << " student info "<< endl<<endl;
student_info[i].getStudentInfo();
cout<< endl<< endl;
}
}
// postgrad students input and displaying function
else if (PG_students==2)
{
// input the student number and declares a pointer variables and its type of the respective class

cout << "Enter students number" << endl;
int n_students;
cin>> n_students;
CStudent* student_info= new CStudent[n_students];
CPG_Student* student_jobs= new CPG_Student[n_students];

// iteration over the array pointer var that executes the function registerStudent() followed by register Student job and save the data in the 2 arrays
for (int i = 0 ;i< n_students ; i++)
{
cout<< endl <<"Enter the "<< i+1 << " student info "<< endl<<endl;
student_info[i].registerStudent();
student_jobs[i].registerStudent_job();
}
// iteration over the students number that displays the data stored at both the arrays
for (int i = 0 ;i<n_students ; i++)
{
cout<< endl <<"Displaying the "<< i+1 << " student info "<< endl<<endl;
student_info[i].getStudentInfo();
student_jobs[i].getStudentJob();
cout<<endl<< endl;
}
}
else{
    cout<<"Invalid input, you should enter 1 or 2";
}
int number_courses;


cout<<endl<<endl;

// input the courses number and declares a pointer variables and its type of the respective class

cout<<"Please Enter Number Of Courses You Want To Add : "<< endl;
cin>>number_courses;
cCourse* courses_details= new cCourse[number_courses];

// iteration over the array pointer var that executes the function Add_Course() and save it in the array

for (int i = 0 ;i<number_courses ; i++)
{
cout<< endl <<"Enter the "<< i+1 << " course data: "<< endl<<endl;
courses_details[i].Add_Course();
}
// iteration over the courses number that displays the data in the array
for (int i = 0 ;i<number_courses ; i++)
{
cout<< endl <<"Displaying the "<< i+1 << " course data: "<< endl<<endl;
courses_details[i].getCourseInfo();
}
return 0;
}
