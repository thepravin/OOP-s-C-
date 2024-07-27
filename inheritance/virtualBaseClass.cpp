#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollNumber(int a)
    {
        roll_no = a;
    }

    void print_rollNumber()
    {
        cout << "Your roll no is : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your Result is Here : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_rollNumber();
        print_marks();
        print_score();
        cout << "Total : " << total << endl;
        cout << "Percentage : " << total / 3;
    }
};

int main()
{
    Result pravin;
    pravin.set_rollNumber(17);
    pravin.set_marks(85, 76);
    pravin.set_score(89);
    pravin.display();
}