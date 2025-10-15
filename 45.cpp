#include <iostream>
using namespace std;

/*
Student -->test 
student -->Sports
test --> result
sport ---. result

*/

class student{
    protected:
      int roll_no;
      public:
      void set_number(int a){
        roll_no = a;
      }
      void print_number(void){
        cout<<"your roll ni is " << roll_no<<endl;
      }
};

class Test : virtual public student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout << "You result is here: "<<endl
             << "Maths:"<< maths<<endl
             << "physics:"<< physics<<endl;
    }
};

class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public Test , public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<< "Your total score is :"<<total<<endl;

    }
};

int main(){
    Result aryan;
    aryan.set_number(4546);
    aryan.set_marks(78.9,99.7);
    aryan.set_score(9);
    aryan.display();

    return 0;
}