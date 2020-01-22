#include <iostream>

using namespace std;

void plus1(int a1,int a2);
void minus1(int a1,int a2);
void delit1(int a1,int a2);
void unoj1(int  a1,int  a2);

void funswitch()
{
	int q1, q2;
	char oper;

	cout << "Vvedite 2 znachenia : ";
	cin >> q1 >> q2;
	
	cout << "* = umnazhenie\n / = delenie\n + = ckjzhenie \n - = raznost \nVvedite operaciu : ";
	cin >> oper;

	switch (oper){
		case '+': 
			plus1(q1,q2); 
		        break;
		case '-': 
			minus1(q1,q2); 
			break;
		case '*': 
			unoj1(q1,q2); 
			break;
		case '/': 
			delit1(q1,q2); 
			break;
		default:
			cout << " LOL " << endl;
	}
}

int main() 
{
	funswitch();
	return 0;
}


void plus1(int a1,int a2)
{
	cout << (a1 + a2) << endl;
}
void minus1(int a1,int a2)
{
	cout << (a1 - a2) << endl;
}
void unoj1(int a1,int a2)
{
	cout << a1 * a2 << endl;
}
void delit1(int a1,int a2)
{
	if (a2 == 0){
                cout << "error 2 chislo = 0" <<endl;
		return;
        }
	cout << a1 / a2 << endl;
}

