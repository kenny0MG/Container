#include "Header.h"

using namespace std;

const int COUNT_MASSIVE = 6;


int main() {

	setlocale(LC_ALL, "Russian");

	//1
	const vector<string> xs = { "hello", "appolon", "Ass", "computer", "aol"," "};
	unsigned num_positive = count_if(xs.begin(), xs.end(), IsPositive);

	cout << num_positive <<"\n";


	//2
	vector<IdName> person = { {12,"Ilya"s}, {23,"Dasha"s}, {56,"Nastya"s}, {12,"Anton"s} };

	sort(person.begin(), person.end());

	for (const auto& element : person) {
		cout << element.id << " " << element.name << endl;
	}


	//3
	std::vector<double> responseTimes = { 2.5, 3.1, 4.0, 1.2, 3.5 };
	double medianTime = calculateMedian(responseTimes);

	std::cout << "Median response time: " << medianTime << std::endl;


	//4
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


	//5
	int massive[COUNT_MASSIVE];

	cout << "Введите " << COUNT_MASSIVE << " элементов массива:\n";

	for (int i = 0; i < COUNT_MASSIVE; ++i) {
		cin >> massive[i];
	}

	cout << "Элементы массива:\n";

	for (int i = 0; i < COUNT_MASSIVE; ++i) {
		cout << massive[i] << "\t";
	}


	//6
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


	//7
	set<string> stop_words = { "of", "in"};
	string query = "Hi my name is Stas";
	string add = accumulate(stop_words.begin(), stop_words.end(), query, AddStopWords);

	cout << add;


	//8
	set<string> set_words = { "Stas","Leon","Victor" };
	vector<string> vector_words = { "Stas","j","Leon","Iliya", };

	vector<unsigned> rezult = CountNames(set_words, vector_words);

	for (const unsigned i : rezult)
		cout << i << " ";


	//9 паралельные алгоритмы
	vector<IdName> list = {{1,"Ilya"},{3,"Stas"},{2,"Petr"}, {5,"Ylia"}};
	vector<int> summ_list;
	sort(execution::par,list.begin(), list.end());

	for (const auto i : list) {
		summ_list.push_back(i.id);
	}

	int resultReduce = reduce(execution::par, summ_list.begin(), summ_list.end(), 0);

	cout << resultReduce;

}

