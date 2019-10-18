#include<iostream>
using namespace std;
float checkAgeScore(int age, float &score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5)throw score;
	score *= 20;

	return 0;
}
int main()
{
	int age;
	float score;
	char name[10];
	cin >> name >> age >> score;
	try {
		cout << name << endl;
		checkAgeScore(age, score);
		cout << age << endl << score << endl;
	}
	catch (int)
	{
		cout << "The age you input is out of range." << endl;
	}
	catch (float)
	{
		cout << "The score you input is out of range." << endl;

	}
	system("pause");
	return 0;

}
