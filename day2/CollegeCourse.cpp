#include "iostream"
#include "string"

using namespace std;


class CollegeCourse
{
    private:
        string departement;
        int courseNum;
        int seats;
    public:
        void setDepartementAndCourse(string, int);
        void setSeats(int);
        void displayCourseData();
};

void CollegeCourse::setDepartementAndCourse(string dept, int num){
    departement = dept;
    courseNum = num;
}

void CollegeCourse::setSeats(int seats){
    if(seats<0)
        seats = 0;
    
    this->seats = seats;
}

void CollegeCourse::displayCourseData(){
    cout<<departement<<courseNum<<" accommodates "<<seats<<" students"<<endl;
}


int main(){
    CollegeCourse myMondayClass;
    string dept;
    int num;
    int students;

    cout << "Enter the department that hosts the class,"<<endl;
    cout << "for example 'CIS' >> ";
    cin >> dept;
    cout << "Enter the course number, for example, for " <<dept << "101, enter 101 >> ";
    cin >> num;
    cout << "Enter the number of students that are allowed" <<endl;
    cout << "to enroll in " << dept << num << " >> ";
    cin >> students;
    
    myMondayClass.setDepartementAndCourse(dept, num);
    myMondayClass.setSeats(students);
    myMondayClass.displayCourseData();

    return 0;
}