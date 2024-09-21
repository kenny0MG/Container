#include "Header.h"

bool IsPositive(const string& x)
{
	if (!x.empty()) {
		return x[0] == 'a' || x[0] == 'A';
	}

}

double calculateMedian(std::vector<double>& responseTimes)
{
	std::sort(responseTimes.begin(), responseTimes.end());

	size_t n = responseTimes.size();

	if (n % 2 == 1) {
		return responseTimes[n / 2];
	}
	else {
		return (responseTimes[n / 2 - 1] + responseTimes[n / 2]) / 2.0;
	}
}


double arifm(vector<int>& numbers) {
	int i = accumulate(numbers.begin(), numbers.end(), 0);
	return (double)i / numbers.size();
}


string AddStopWords(const string& query, const string& stop_word) {

	return query + " -" + stop_word;
}


vector<unsigned> CountNames(set<string>& set_words, vector<string>& words) {
	vector<unsigned> rezult;
	for (const string& word : words) {
		if (set_words.count(word))
			rezult.push_back(1);
		else
			rezult.push_back(0);
	}
	return rezult;
}

