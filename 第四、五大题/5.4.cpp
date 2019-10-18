#include<iostream>

usingnamespacestd;

floatcheckAgeScore(intage, float&score)

{

	if (age < 16 | age>25)throwage;

	if (score < 0 | score>5)throwscore;

	score *= 20;

	return0;

}

intmain()

{

	intage;

	floatscore;

	charname[10];

	cin >> name >> age >> score;

	try {

		cout << name << endl;

		checkAgeScore(age, score);

		cout << age << endl << score << endl;

	}

	catch (int)

	{

		cout << "Theageyouinputisoutofrange." << endl;

	}

	catch (float)

	{

		cout << "Thescoreyouinputisoutofrange." << endl;


	}
	system("pause");

	return0;

}

