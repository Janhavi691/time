#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
	private:
		int seconds;
		int hh,mm,ss;
		void covertIntoSeconds;
	public:
		void getTime(void);
		void displayTime(void);
};
void Time::getTime(void)
{
	cout<<"Enter time:"<<endl;
	cout<<"Hours?"; cin>>hh;
	cout<<"Minutes?"; cin>>mm;
	cout<<"Seconds?"; cin>>ss;
}
void Time::convertIntoSeconds(void)
{
	cout<<"The time is=" <<setw(2)<<setfill('0')<<hh<<":"
	                    <<setw(2)<<setfill('0')<<mm<<":"
	                     <<setw(2)<<setfill('0')<<ss<<endl;
    cout<<"Time in total seconds:"<<seconds;
}
int main()
{
	Time T;//creating objects
	T.getTime();
	T.convertIntoSeconds();
	T.displayTime();
	
	return 0;
}
