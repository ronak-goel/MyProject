#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int img;
public:
	Complex(){
		this->real = 0;
		this->img = 0;
	}
	
	Complex(int real ,int img){
		this->real = real;
		this->img = img;
	}

	void display(){
		cout<<real<<" + i"<<img;
	}
	
	void setReal(int real){
		this-> real = real;
	}
	
	void setImg(int real){
		this-> img = img;
	}
	
	int getReal(){
		return this->real;
	}
	
	int getImg(){
		return this->img;
	}
	
	friend Complex operator+(Complex ,Complex );
	friend Complex operator-(Complex ,Complex );
	friend Complex operator*(Complex ,Complex );
};

Complex operator+(Complex A,Complex B){
	Complex C;
	C.real = A.real + B.real;
	C.img =  A.img + B.img;
	return C;
}

Complex operator-(Complex A,Complex B){
	Complex C;
	C.real = A.real - B.real;
	C.img =  A.img - B.img;
	return C;
}

Complex operator*(Complex A,Complex B){
	Complex C;
	C.real = (A.real)*(B.real) - (A.img)*(B.img);
	C.img =  (A.real)*(B.img) + (A.img)*(B.real);
	return C;
}


int main(){
	Complex A(4,5);
	Complex B(2,3);
	cout<<"A is : ";
	A.display();
	cout<<endl;
	cout<<"B is : ";
	B.display();
	cout<<endl;
	Complex C;
	C = A + B;
	cout<<"Addition of A and B is : ";
	C.display();
	cout<<endl;
	
	Complex D;
	D = A - B;
	cout<<"Substraction of A and B is : ";
	D.display();
	cout<<endl;
	
	Complex E;
	E = A * B;
	cout<<"Multiplication of A and B is : ";
	E.display();
	cout<<endl;
	return 0;
}

