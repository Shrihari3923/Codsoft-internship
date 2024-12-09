//SIMPLE CALCULATOR
#include<iostream>
using namespace std;
int main(){
    float  sum,product,difference,quotient,operand1,operand2;
    char o;
    std::cout<<"\n Enter two numbers: ";
    std::cin>>operand1>>operand2;
    std::cout<<"\n Enter the operator: ";
    std::cin>>o;
    if(o=='+'){
        sum=operand1+operand2;
        std::cout<<"="<<sum;}
    else if(o=='-'){
        difference=operand1-operand2;
        std::cout<<"="<<difference;
    }
    else if(o=='*'){
        product=operand1*operand2;
        std::cout<<"="<<product;
    }
    else if(o=='/'){
        quotient=operand1/operand2;
        std::cout<<"="<<quotient;
    }
    else{
        std::cout<<"\n Invalid Operator Used in Expression";
    }

}