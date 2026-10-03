#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll  number is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here :" << endl
             << "maths: " << math << endl
             << "physics: " << physics << endl;
    }
};
class sports : virtual public student
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
        cout << "Your Pt score is " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is: " << total << endl;
    }
};
int main()
{
    result tymi;
    tymi.set_number(11650055);
    tymi.set_marks(88.3, 72.5);
    tymi.set_score(8);
    tymi.display();
    return 0;
}