#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct studentdetail
{
    int studID;
    string studName;
    int age;
    string gender;
    float score;
    char grade;
};

int main()
{
    int i, k, d = 1, summationscore, summationage, malecount=0, femalecount=0;
    double avrgscore, avrgage;

    studentdetail student[5];

    for (i=0; i<5; i++) {
        cout << "STUDENT DETAILS: " << i << endl << endl;
        cout << "Student ID: "; cin >> student[i].studID;
        cout << "Name: "; cin >> student[i].studName;
        cout << "Age: "; cin >> student[i].age;
        cout << "Gender: "; cin >> student[i].gender;
        cout << "Score: "; cin >> student[i].score;
        if(student[i].score >= 80){
            student[i].grade = 'A'; }
        else if(student[i].score >= 70){
            student[i].grade = 'B';}
        else if(student[i].score >= 60){
            student[i].grade = 'C';}
        else if(student[i].score >= 50){
            student[i].grade = 'D';}
        else if(student[i].score >= 40){
            student[i].grade = 'E';}
        else if(student[i].score < 40){
            student[i].grade = 'F';}
        cout << "Grade: " << student[i].grade;
        cout << endl << endl << endl;

        if(student[i].gender == "Male")
            malecount++;
        else
            femalecount++;
    }
    //cout << "Student ID" << " " << "Name" << " " << "Age" << " " << "Gender" << " " << "Score" << " " << "Grade" << endl;
    //cout << student[i].studID << " " << student[i].studName << " " << student[i].age << " " << student[i].gender << " " << student[i].score << " " << student[i].grade << endl << endl;


    summationscore = student[0].score+ student[1].score + student[2].score + student[3].score + student[4].score;
    summationage = student[0].age+ student[1].age + student[2].age + student[3].age + student[4].age;


    avrgscore = summationscore/5;
    avrgage = summationage/5;


    cout << "Number of males: " << malecount << endl;
    cout << "Number of females: " << femalecount << endl;
    cout << "Average score: " << avrgscore << endl;
    cout << "Average age: " << avrgage << endl;

    cout << "Student ID" << " " << "Name" << " " << "Age" << " " << "Gender" << " " << "Score" << " " << "Grade" << endl;
    cout << student[i].studID << " " << student[i].studName << " " << student[i].age << " " << student[i].gender << " " << student[i].score << " " << student[i].grade << endl;
   return 0;
}
