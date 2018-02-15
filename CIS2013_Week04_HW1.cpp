#include <iostream>
#include <math.h>

using namespace std;


float num1;
float num2;
char op;
char cont;

float add (float a, float b)
{
	float c;
	c=a+b;
	return c;
}
float subtract (float a, float b)
{
	float c;
	c=a-b;
	return c;	
}
float multiply (float a, float b)
{
	float c;
	c=a*b;
	return c;	
}
float divide (float a, float b)
{
	float c;
	c=a/b;
	return c;	
}
float mod (float a, float b)
{
	float c;
	c=fmod(a,b);
	return c;
}
float square (float a)
{
	float b;
	b=sqrt(a);
	return b;
}

int main() 
{
do
{
cout << "Please Enter First Number: " << endl;
cin >> num1;
cout << "Please Choose +, -, *, /, %, or S ('S' for Square root) " << endl;
cin >> op;

 switch(op)
    {
	case '+':
		cout << "Please Enter Second Number: " << endl;
		cin >> num2;
		cout << add(num1,num2) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
        break;

    case '-':
		cout << "Please Enter Second Number: " << endl;
		cin >> num2;
		cout << subtract(num1,num2) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
        break;

    case '*':
		cout << "Please Enter Second Number: " << endl;
		cin >> num2;
		cout << multiply(num1,num2) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
        break;

    case '/':
		cout << "Please Enter Second Number: " << endl;
		cin >> num2;
		cout << divide(num1,num2) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
        break;
		
	case '%':
		cout << "Please Enter Second Number: " << endl;
		cin >> num2;
		cout << mod(num1,num2) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
		break;
		
	case 'S':
		cout << square(num1) << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
		break;

    default:
        cout << "We are Sorry! Please Insert Right Notaton";
		cout << " " << endl;
		cout << "Do you want to do something more? y/n" << endl;
		cin >> cont;
        break;
    }
}
while (cont == 'y');
	return 0;
} 