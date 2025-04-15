#include<iostream>
using namespace std;
class building
{
	private:
		float energyrequirement;
		int capacity;
		int inhabitants;
		int level;
		int levelup;
		string name;
		float pollution;
		int income;
	public:
		void set(string n)
		{
			name=n;
						level=1;
			inhabitants=10;
			energyrequirement=100*float(inhabitants);
			levelup=100*level;
			pollution=10*float(inhabitants);
			income=inhabitants*10;
		}
		void print()
		{
			cout<<"Name of the building: "<<name<<endl;
			cout<<"Number of inhabitants: "<<inhabitants<<endl;
			cout<<"Energy requirement of the building: "<<energyrequirement<<endl;
			cout<<"Level: "<<level<<endl;
			cout<<"Level up price: "<<levelup<<endl;
			cout<<"Income: "<<income<<endl;
			cout<<"Total capacity: "<<capacity<<endl;
			cout<<"Pollution caused by the building: "<<pollution<<endl;
		}
		void addinhabitants(int x)
		{
			inhabitants=inhabitants+x;
			energyrequirement=100*float(inhabitants);
			pollution=10*float(inhabitants);
			income=inhabitants*10;
		}
	
};
int main()
{
	building k;
	string m;
	cout<<"Enter the name of your city: ";
	getline(cin,m);
	k.set(m);
	k.print();
	k.addinhabitants(20);
	k.print();

	return 0;
}
