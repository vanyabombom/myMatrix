#include<iostream>
using namespace std;

template <class T>
class Matrix
{
	T** ptr;
	int str;
	int st;
public:
	Matrix()
	{
		ptr = nullptr;
		str = st = 0;
	}
	Matrix(int _str, int _st)
	{
		str = _str;
		st = _st;
		ptr = new T*[str]; 

		for (int i = 0; i < str; i++)
		{
			ptr[i] = new T[st]{0};  
		}

	}
	void Input()
	{
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < st; j++)
			{
				ptr[i][j] = rand() % 100;  
			}
		}
	}
	void Print()const
	{
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < st; j++)
			{
				cout << ptr[i][j] << "\t";
			}
			cout << endl << endl;
		}
	}
	~Matrix()
	{
		for (int i = 0; i < str; i++)
		{
			delete[] ptr[i];
		}
		delete[] ptr;
	}
};

int main()
{
	Matrix<char> obj1(3, 2);  
	obj1.Input();
	obj1.Print();

	Matrix<int> obj2(5, 10);  
	obj2.Input();
	obj2.Print();

	Matrix<double> obj3(2.2, 2.8);
}
