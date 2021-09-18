#include<iostream>
using namespace std;

class Person {
public:
	static int a;
	static int funa() {
		cout << "a" << endl;
		return 0;
	}
	int b;
	int funb() {
		cout << "b" << endl;
	}
};
int main() {
	Person p;
	cout << sizeof(p);
	system("pause");
	/*int a[] = { 1,2,3 };
	//int *b = new int[3];
	int *b = aa();
	b = a;
	
	for (int i=0; i < 10; i++) {
		cout << b[i] << "," << endl;
	}*/


}
