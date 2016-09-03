#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        int maximum = 0;

        for (int i = 0; i < this->elements.size(); i++) {
            for (int j = 0; j < this->elements.size(); j++) {
                int absolute = abs(elements[i] - elements[j]);
                if (absolute > maximum) maximum = absolute;
            }
        }

        maximumDifference = maximum;
    }
};

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
