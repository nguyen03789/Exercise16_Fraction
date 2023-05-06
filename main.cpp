#include <stdio.h>
#include <stdint.h>
#include <math.h>
using namespace std;
class Fraction{
    private:
        int16_t Numeator;
        int16_t Decominator;
    public:
        int16_t get_Num();
        int16_t get_Dec();
        void Set_Fraction(int16_t Numeator, int16_t Decominator);
};

void Fraction::Set_Fraction(int16_t Numeator , int16_t Decominator ){
    this->Numeator = Numeator;
    this->Decominator = Decominator;
}

int16_t Fraction::get_Num(){
    return this->Numeator;
}

int16_t Fraction::get_Dec(){
    return this->Decominator;
}


class Fraction_Cal{
    private:
        Fraction A;
        Fraction B;
    public:
        Fraction_Cal(Fraction A, Fraction B);
        void Frac_Add(Fraction A, Fraction B);
        void Frac_Sub(Fraction A, Fraction B);
        void Frac_Mul(Fraction A, Fraction B);
        void Frac_Div(Fraction A, Fraction B);
};

Fraction_Cal::Fraction_Cal(Fraction A, Fraction B){
    this->A = A;
    this->B = B;
}

void Fraction_Cal::Frac_Add(Fraction A, Fraction B){
    if(A.get_Dec()== 0 || B.get_Dec() == 0) printf("Decominator of Frac A or B is equal 0");
     else {
    double result = (A.get_Num() * B.get_Dec() + B.get_Num() * A.get_Dec()) / (A.get_Dec() * B.get_Dec());
     printf("The Result of Addition is %lf\n",result);
     }
}

void Fraction_Cal::Frac_Sub(Fraction A, Fraction B){
    if(A.get_Dec()== 0 || B.get_Dec() == 0) printf("Decominator of Frac A or B is equal 0");
     else {
    double result = (A.get_Num() * B.get_Dec() - B.get_Num() * A.get_Dec()) / (A.get_Dec() * B.get_Dec());
     printf("The Result of Subtraction is %lf\n",result);
     }
}

void Fraction_Cal::Frac_Mul(Fraction A, Fraction B){
    if(A.get_Dec()== 0 || B.get_Dec() == 0) printf("Decominator of Frac A or B is equal 0");
     else {
    double result = (A.get_Num() * B.get_Num()) / (A.get_Dec() * B.get_Dec());
     printf("The Result of Multiplication is %lf\n",result);
     }
}

void Fraction_Cal::Frac_Div(Fraction A, Fraction B){
    if(A.get_Dec()== 0 || B.get_Dec() == 0) printf("Decominator of Frac A or B is equal 0");
     else {
    double result = (A.get_Num() * B.get_Dec()) / (A.get_Dec() * B.get_Num());
     printf("The Result of Divison is %lf\n",result);
     }
}

int main(int argc, char const *argv[])
{
    Fraction A,B;
    A.Set_Fraction(1,2);
    B.Set_Fraction(1,2); 
    Fraction_Cal Cal(A,B);
    Cal.Frac_Add(A,B);
    Cal.Frac_Sub(A,B);
    Cal.Frac_Mul(A,B);
    Cal.Frac_Div(A,B);
    return 0;
}
