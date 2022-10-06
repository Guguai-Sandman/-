////3.1
//#include <iostream>
//int main()
//{
//	using namespace std;
//	const int Inch_per_feet = 12;
//	int height;
//
//	cout << "Please enter your height in inch:___\b\b\b";
//	cin >> height;
//	cout << "Your height is " << height / Inch_per_feet << " feet and " << height % Inch_per_feet << " inches." << endl;
//
//	return 0;
//}

////3.2
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	const int Inch_per_feet = 12;
//	const double Pound_per_kg = 2.2;
//	const double Meter_per_inch = 0.0254;
//	double height_feet, height_inch, weight, meter;
//
//	cout << "Please enter your height in feet and inch: ";
//	cin >> height_feet >> height_inch;
//	cout << "Please enter your weight in pound: ";
//	cin >> weight;
//
//	cout << "Your height is " << height_feet * Inch_per_feet + height_inch * height_inch << " inches." << endl;
//	meter = (height_feet * Inch_per_feet + height_inch) * Meter_per_inch;
//	cout << "Your BMI is " << (weight / Pound_per_kg) / (meter * meter) << "." << endl;
//
//	return 0;
//}

////3.3
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	const double Minute_per_degree = 60.0;
//	const double Second_per_minute = 60.0;
//	double degree, minute, second, total;
//
//	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
//	cout << "First, enter the degree: ";
//	cin >> degree;
//	cout << "Next, enter the minutes of arc: ";
//	cin >> minute;
//	cout << "Finally, enter the seconds of arc: ";
//	cin >> second;
//
//	total = degree + (minute / Minute_per_degree) + (second / (Minute_per_degree * Second_per_minute));
//	cout << degree << " degrees, ";
//	cout << minute << " minutes, ";
//	cout << second << " seconds = ";
//	cout << total << " degrees" << endl;
//
//	return 0;
//}

////3.5
//#include <iostream>
//int main()
//{
//	using namespace std;
//	cout << "Enter the world's population:";
//	long long world_population, us_population;
//	cin >> world_population;
//	cout << "Enter the population of the US:";
//	cin >> us_population;
//	double perc = double(us_population) / world_population * 100LL;
//	cout << "The population of the US is " << perc << "% of the world populaion";
//
//	return 0;
//}

////3.6
//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	double kilometer, liter;
//
//	cout << "Please enter your driving distance(km): ";
//	cin >> kilometer;
//	cout << "Please enter your gas consumption(liter): ";
//	cin >> liter;
//
//	cout << "You consume " << liter / kilometer * 100;
//	cout << " liter gas for driving per 100km." << endl;
//
//	return 0;
//}

//3.7
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	const double MILE_PER_KM = 0.6214;
//	const double LITER_PER_GALLON = 3.875;
//	double kilometer, liter;
//
//	cout << "Please enter your driving distance(km): ";
//	cin >> kilometer;
//	cout << "Please enter your gas consumption(liter): ";
//	cin >> liter;
//
//	cout << "You consume " << liter / kilometer * 100;
//	cout << " liter gas for driving per 100 km(European style)." << endl;
//	cout << "You drive " << kilometer * MILE_PER_KM / liter * LITER_PER_GALLON;
//	cout << " miles for per gallon(American style)." << endl;
//
//	return 0;
//}
