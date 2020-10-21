#include <stdexcept>
#include <cassert>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minimum_index(vector<int> seq) {
	if (seq.empty()) {
		throw invalid_argument("Cannot get the minimum value index from an empty sequence");
	}
	int min_idx = 0;
	for (int i = 1; i < seq.size(); ++i) {
		if (seq[i] < seq[min_idx]) {
			min_idx = i;
		}
	}
	return min_idx;
}

class TestDataEmptyArray {
public:
	static vector<int> get_array() {
		vector<int> vect{};
		return vect;
	}

};

class TestDataUniqueValues {
public:
	static vector<int> get_array() {
		vector<int> vect{ 23,5,8,12,7 };
		return vect;
	}

	static int get_expected_result() {
		return 1;
	}

};

class TestDataExactlyTwoDifferentMinimums {
public:
	static vector<int> get_array() {
		vector<int> vect{ 9,23,3,8,12,3,7 };
		return vect;
	}

	static int get_expected_result() {
		return 2;
	}

};
