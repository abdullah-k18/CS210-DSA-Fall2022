#include<iostream>
using namespace std;
class Laptop
{
private:
	string brand, cpu, gpu;
	int ram, rom = 0 ;
public:
	Laptop()
	{
		cout << "Enter the brand of your laptop: ";
		cin >> brand;
		cout << "Enter the name of gpu installed: ";
		cin >> gpu;
	}
	Laptop(string CPU)
	{
		cpu = CPU;
		cout << "CPU = " << cpu << endl;
	} 
public:
	void setter(int Ram,int Rom)
	{
		ram = Ram;
		rom = Rom;
	}
	int getter()
	{  
		return ram;
		return rom;
	}	
	void displayfunc()
	{
		cout << "Brand of Laptop : " << brand << endl;
		cout << "Gpu of Laptop : " << gpu << endl;
	}
	~Laptop()
	{
	}
};
int main()
{
	Laptop obj1;
	Laptop obj2("core i5");
	obj1.setter(8,64);
	obj1.getter();
	cout << obj1.getter();
	return 0;	
}