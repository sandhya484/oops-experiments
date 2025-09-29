#include<iostream>
using namespace std;

class Number{
private : int value;
public : 
	Number operator++(){
	value+=100;
	return 	value;
	}
	void display_values(){
		cout<<"\nThe value before overload increament operator is : "<<value;
	}
	void display_overloadedValues(){
		cout<<"\nThe Overloaded value is "<<value;
	}
	friend Number operator++(Number &n,int);
	
	Number(int v=0){
		value=v;
	}
};
Number operator++(Number &n,int){
	Number temp=n;
	n.value+=100;
	return temp;
}

/*int main(){
	Number num1(100),num2(200);
	num1.display();
	num2.display();
	num1++;
	num1.display();
	++num2;
	num2.display();
	return 0;
}*/
int main(){
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	Number num1(a),num2(b);
	num1.display_values();
	num2.display_values();
	num1++;
	num1.display_overloadedValues();
	++num2;
	num2.display_overloadedValues();
	return 0;
}
