#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <chrono>
#include "Header.h"

using namespace std;

const int COUNT_MASSIVE = 6;



int main() {

	setlocale(LC_ALL, "Russian");

	//first
	const vector<string> xs = { "hello", "appolon", "Ass", "computer", "aol"," "};
	unsigned num_positive = count_if(xs.begin(), xs.end(), IsPositive);
	cout << num_positive <<"\n";


	//second
	vector<pair<unsigned, string>> person = { {12,"Ilya"s}, {23,"Dasha"s}, {56,"Nastya"s}, {12,"Anton"s} };

	sort(person.begin(), person.end());

	for (const auto& element : person) {
		cout << element.first << " " << element.second << endl;
	}


	//third
	std::vector<double> responseTimes = { 2.5, 3.1, 4.0, 1.2, 3.5 };

	double medianTime = calculateMedian(responseTimes);
	std::cout << "Median response time: " << medianTime << std::endl;
  


	//fourth
	vector<pair<int, string>> person_name;

	int count;
	cin >> count;
	for (int i = 0; i < count; ++i) {
		string name;
		int age;
		cout << "name";
		cin >> name;
		cout << "age";
		cin >> age;
		person_name.push_back({ age,name });



		
	}
	sort(person_name.begin(), person_name.end());

	for (const auto p : person_name) {
		cout << p.second<<endl;
	}



	//fifth
	int massive[COUNT_MASSIVE];
	cout << "Введите " << COUNT_MASSIVE << " элементов массива:\n";

	for (int i = 0; i < COUNT_MASSIVE; ++i) {
		cin >> massive[i];
	}

	cout << "Элементы массива:\n";
	for (int i = 0; i < COUNT_MASSIVE; ++i) {
		cout << massive[i] << "\t";
	}

	//sixsth
	vector<int> numbers;
	int count_number, number;

	cout << "Введите колличество элементов массива:\n";


	cin >> count;
	cout << "Элементы массива:\n";


	for (int i = 0; i != count; ++i) {
		cin >> number;
		numbers.push_back(number);
	}

	double sr = arifm(numbers);

	cout<<sr;


	//seventh
	set<string> stop_words = { "of", "in"};
	string query = "Hi my name is Stas";
	string add = accumulate(stop_words.begin(), stop_words.end(), query, AddStopWords);


	cout << add;



	//eight
	set<string> set_words = { "Stas","Leon","Victor" };
	vector<string> vector_words = { "Stas","j","Leon","Iliya", };

	vector<unsigned> rezult = CountNames(set_words, vector_words);

	for (const unsigned i : rezult)
		cout << i << " ";
}

