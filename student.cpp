#include <iostream>
#include <string>
#include "student.h"
using namespace std;
//Initialize Each Variable 0 For Numbers And NULL For Strings
CStudent::CStudent()
{
student_name= " ";
student_ID = 0;
student_email_username=" ";
student_major =" ";
student_score=0.0;
student_email_password="";
//--------------------------------
//Iteration Over Student Grades And Initialize Them By Zero
for (int i = 0; i < 5; i++)
{
student_grades[i] = 0.0;
}
}
//--------------------------------
//Student Name Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentName(string name)
{
student_name= name;
}
string CStudent::getStudentName()
{
    return student_name;
}
//-------------------------------
//Student ID Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentID(int id)
{
student_ID = id;
}
int CStudent::getStudentID()
{
    return student_ID;
}
//-------------------------------
//Student Email User Name Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentEmailUsername(string username)
{
student_email_username= username;
}
string CStudent::getStudentEmailUsername()
{
    return student_email_username;
}
//-------------------------------
//Student Major Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentMajor(string major)
{
student_major= major;
}
string CStudent::getStudentMajor()
{
    return student_major;
}
//-------------------------------
//Student Grade Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentGrade(int index, float grade)
{
student_grades[index] = grade;
}

float CStudent::getStudentGrade(int index)
{
    return student_grades[index];
}
//-------------------------------
//Student Score Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentScore(float score)
{
student_score =score;
}

float CStudent::getStudentScore()
{
    return student_score;
}
//-------------------------------
//Student Email Password Set And Get Functions to Allow Access To The Private Data
void CStudent::setStudentEmailPassword(string pass)
{
student_email_password=pass;
}

string CStudent::getStudentEmailPassword()
{
    return student_email_password;
}
//-------------------------------
//Input Student Info
void CStudent::registerStudent()
{
    cout << "Enter student name: ";
    cin >> student_name;        //input  Student Name
    cout << "Enter student ID: ";
    cin >> student_ID;          //input  Student ID
    cout << "Enter student email: ";
    cin >> student_email_username;  //input  Student username
    cout<< "Enter student major: ";
    cin>> student_major;            //input  Student major
    cout<< "Enter student grades: ";
  for (int i = 0; i < 5; i++)
  {
    cin>> student_grades[i];   //input  Student Grade
  }
    cout<<"Enter student score: ";
    cin>> student_score;         //Input Student Score
    cout<< "Enter student password: ";
    cin>>student_email_password;        //Input Student Email Password
}
// GPA calculator function
void CStudent::calculateGPA(float student_grades[5])
{
float sum = 0.0;
for(int i=0; i<5;i++)
{
sum+=student_grades[i];
}
student_score= sum/100;
}
//-------------------------------
//Display Student Info
void CStudent::getStudentInfo()
{
    cout << "Student name: " << getStudentName() << endl;
    cout << "Student ID: " << getStudentID() << endl;
    cout << "Student email username: " << getStudentEmailUsername() << endl;
    cout << "Student major: " << getStudentMajor() << endl;
    cout << "Student grades: ";
for (int i = 0; i < 5; i++)
{
    cout << student_grades[i] <<"\t";
}
    cout << endl<<"Student score: "<<getStudentScore()<<endl;
    calculateGPA(student_grades);
    cout <<"Student GPA: " <<student_score<<endl;
}
//Initialize Each Variable 0 For Numbers And NULL For Strings
cCourse::cCourse()
{
course_name=" ";
course_code=" ";
course_cost=0;
}
//--------------------------------
//Course Name Set And Get Functions to Allow Access To The Private Data
void cCourse::setCourse_name(string n )
{
course_name = n;
}
string cCourse::getCourse_name()
{
    return course_name;
}
//--------------------------------
//Course Code Set And Get Functions to Allow Access To The Private Data
void cCourse::setCourse_code(string c)
{
course_code = c;
}
string cCourse::getCourse_code()
{
    return course_code;
}
//--------------------------------
//Course Cost Set And Get Functions to Allow Access To The Private Data
void cCourse::setCourse_cost(float Ccost)
{
course_code = Ccost;
}

float cCourse::getCourse_cost()
{
    return course_cost;
}
//Input Course Details
void cCourse::Add_Course()
{
    cout<<"Please Enter Course Name : ";
    cin>>course_name;
    cout<<"Please Enter Course code : ";
    cin>>course_code;
    cout<<"Please Enter Course Cost : ";
    cin>>course_cost;
    cout<< endl;
}
//Display Course Details
void cCourse::getCourseInfo()
{
    cout <<"Course Name: " <<getCourse_name()<<endl;
    cout <<"Course Code: " <<getCourse_code()<< endl;
    cout <<"Course Cost: " <<getCourse_cost()<< endl;
}
//Initialize Job Title By NULL
 CPG_Student::CPG_Student()
 {
    cpg_student_job_title=" ";
 }
 //--------------------------------
//PostGraduate Student Job Title Set And Get Functions to Allow Access To The Private Data
void CPG_Student::setcpg_student_job_title(string s)
{
cpg_student_job_title=s;
}
string CPG_Student::getcpg_student_job_title() // Public getter to access job title data from outside the class
{
    return cpg_student_job_title;
}
    //--------------------------------
    //Store Student Job
void CPG_Student::registerStudent_job()
{
    cout << "Enter student job: ";
    cin >> cpg_student_job_title ;
}
    //--------------------------------
    // Private method that formats and prints job title
    // Calls public getter to access data
void CPG_Student::getStudentJob()
{
    cout << "Student job: " << getcpg_student_job_title() << endl;
}
