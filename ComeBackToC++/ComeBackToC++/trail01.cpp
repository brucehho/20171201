#include <iostream>
using namespace std;
#include <vector>
//constexpr double GetPi() { return 22.0 / 7; }
//constexpr double TwicePi() { return 2 * GetPi(); }
//constexpr double ThirdPi() { return 3 * GetPi(); }
#include<string>
#include<bitset>

class Human
{
public:
	string name;
	int age;
	void IntroduceSelf()
	{
		cout << "I am" + name << "and am";
		cout << age << "years old" << endl;
	}
};
int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.age = 30;
	Human firstWoman;
	firstWoman.name = "Sue";
	firstWoman.age = 29;
	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();
	
	return 0;

}