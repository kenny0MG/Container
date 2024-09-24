#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <execution>

using namespace std;



struct IdName {
	int id;
	string name;
};



bool IsPositive(const string& x);

double arifm(vector<int>& numbers);

double calculateMedian(std::vector<double>& responseTimes);

string AddStopWords(const string& query, const string& stop_word);

vector<unsigned> CountNames(set<string>& set_words, vector<string>& words);

