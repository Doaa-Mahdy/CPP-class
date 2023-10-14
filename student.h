#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
using namespace std;
class CStudent {
protected:
    string student_name;
    int student_ID;
    string student_email_username;
    string student_major;
    float student_grades[5];
    float student_score;
    string student_email_password;

public:
    CStudent();   //CStudent Constructor
     //--------------------------------
     //Student Name Setter And Getter
    void setStudentName(string name);
    string getStudentName();
     //--------------------------------
     //Student ID Setter And Getter
    void setStudentID(int id);
    int getStudentID();
    //--------------------------------
    //Student email User Name setter And Getter
    void setStudentEmailUsername(string username);
    string getStudentEmailUsername();
    //--------------------------------
    //Student Major Setter And Getter
    void setStudentMajor(string major);
    string getStudentMajor();
    //--------------------------------
    //Student Grade Setter And Getter
    void setStudentGrade(int index, float grade);
    float getStudentGrade(int index);
    //--------------------------------
    //Student Score Setter And Getter
    void setStudentScore(float score);
    float getStudentScore();
    //--------------------------------
    //Student Email Password Setter And Getter
    void setStudentEmailPassword(string pass);
    string getStudentEmailPassword();
    //Calculating GPA
    void calculateGPA(float student_grades[5]);
    //--------------------------------
    //Store Student Info
    void registerStudent();
    //--------------------------------
    //Display Student Info
    void getStudentInfo();
    //--------------------------------


};
class cCourse{
private:
    string course_name;
    string course_code;
    float course_cost;
public :
    cCourse(); // cCourse Constructor Function ( Default Constructor )
    //--------------------------------
    //Course name Setter And Getter
    void setCourse_name(string n );
    string getCourse_name();
    //--------------------------------
    //Course code Setter And Getter
    void setCourse_code(string c);
    string getCourse_code();
    //--------------------------------
    //Course Cost Setter And Getter
    void setCourse_cost(float Ccost);
    float getCourse_cost();
    //--------------------------------
    //Add Course Details Function To save and store the new course's information
    void Add_Course();
    //--------------------------------
    // Display Course Information For The User
    void getCourseInfo();
};
//Inheritance Class From CStudent Class
class CPG_Student : public CStudent
{
public:
    CPG_Student(); //CPG  Student Constructor
    //--------------------------------
    //setter and getter of job title
    void setcpg_student_job_title(string s);
    string getcpg_student_job_title();
    //--------------------------------
    //Store Student Job Title
    void registerStudent_job();
     //--------------------------------
     //Display Student Job Title For the User
    void getStudentJob();
private:
    string cpg_student_job_title;
};
#endif // STUDENT_H_INCLUDED
