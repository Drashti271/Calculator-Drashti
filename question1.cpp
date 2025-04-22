#include<iostream>
using namespace std;

int sum(int a,int b) {return a+b;}
int sub(int a,int b) {return a-b;}
int mul(int a,int b) {return a*b;}
float divi(int a,int b) {return a/b;}
int mod(int a,int b) {return a%b;}

int main(){

    int a,b,choice;

    do{

        cout<<endl;
        cout<<"Press 1 for +: "<<endl;
        cout<<"Press 2 for -: "<<endl;
        cout<<"Press 3 for *: "<<endl;
        cout<<"Press 4 for /: "<<endl;
        cout<<"Press 5 for %: "<<endl;
        cout<<"Press 0 for exit: "<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>choice;
    
        switch(choice)
        {
            case 1:
                cout<<"Enter the first number: ";
                cin>>a;

                cout<<"Enter the second number: ";
                cin>>b;

                cout<<"Addition of a and b is: "<<sum(a,b);
            break;
            case 2:
                cout<<"Enter the first number: ";
                cin>>a;

                cout<<"Enter the second number: ";
                cin>>b;

                cout<<"Substraction of a and b is: "<<sub(a,b);
            break;
            case 3:
                cout<<"Enter the first number: ";
                cin>>a;

                cout<<"Enter the second number: ";
                cin>>b;

                cout<<"Multiplication of a and b is: "<<mul(a,b);
            break;
            case 4:
                cout<<"Enter the first number: ";
                cin>>a;

                cout<<"Enter the second number: ";
                cin>>b;

                cout<<"Division of a and b is: "<<divi(a,b);
            break;
            case 5:
                cout<<"Enter the first number: ";
                cin>>a;

                cout<<"Enter the second number: ";
                cin>>b;

                cout<<"Module of a and b is: "<<mod(a,b);
            break;
            case 0:
            break;
            default:
                cout<<"Wrong choice!!!";
        }

    }while(choice != 0);

    return 0;
}