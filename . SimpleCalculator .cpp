#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
	private:
			int a , b;
	public:	
	void getdataSimple(){
		cout << "\n***********************SimpleCalculator***********************"<<endl;
		cout << "Enter The Value Of A : "  ;
		cin  >> a;
		cout << "Enter The Value Of B : "  ;
		cin  >> b;
		cout << endl;
	}
	void PerformOperationsSimple(){
		cout << "The VAlue Of A + b Is : " << a+b << endl;
		cout << "The VAlue Of A - b Is : " << a-b << endl;
		cout << "The VAlue Of A * b Is : " << a*b << endl;
    	cout << "The VAlue Of A / b Is : " << a/b << endl;
    	cout << "The VAlue Of A % b Is : " << a%b << endl;	
    	cout << endl;
	}

};
class ScientificCalculator{
		private:
			int a , b;
	public:	
	void getdataScientific(){
		cout << "\n***********************ScientificCalculator***********************" << endl;
		cout << "Enter The Value Of A : "  ;
		cin  >> a;
		cout << "Enter The Value Of B : "  ;
		cin  >> b;
		cout << endl;
	}
	void PerformOperationsScientific(){
		cout << "The VAlue Of cos(a)  Is : " << cos(a)  << endl;
		cout << "The VAlue Of sin(a)  Is : " << sin(a)  << endl;
		cout << "The VAlue Of exp(a)  Is : " << exp(a)  << endl;
    	cout << "The VAlue Of tan(a)  Is : " << tan(a)  << endl;
    }
	
};
class Hybrid : public SimpleCalculator , public ScientificCalculator{

			
	
};

int main(){
//	SimpleCalculator  sc;
//	sc.getdata();
//	sc.PerformOperations();
//	ScientificCalculator SC;
//	SC.getdata();
//	SC.PerformOperations();
 Hybrid h;
 h.getdataScientific();
 h.PerformOperationsScientific();
 h.getdataSimple();
 h.PerformOperationsSimple();
	
}
