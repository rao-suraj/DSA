#include <iostream>

using namespace std;

class Student
{
protected:
    protected :
    int studentId;
    public :
    Student(){
    }
    void setStudentId(int id)
    {
        studentId=id;
    }
    void getStudentID()
    {
        cout<<studentId<<endl;
    }
};

class Marks : public Student{
    protected:
    int maths,physics;
    public :
    void setMarks(int m,int p)
    {
        maths=m;
        physics=p;
    }
};

class Result : public Marks{
    public:
    void getPercentage(){
        cout<<"Marks are ="<<(maths+physics)/2<<endl;
    }
    void setStudent(int id)
    {
        studentId=id;
    }
    void setMarks(int m ,int p)
    {
        maths=m;
        physics=p;
    }
};

int main()
{
    Result st;
    st.setStudent(1);
    st.setMarks(10,20);
    st.getPercentage();
    st.getStudentID();
    return 0;
}