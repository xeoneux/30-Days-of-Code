class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        return {};
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
     return {1,2};
    }

    static int get_expected_result() {
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        return {2,1,1};
    }

    static int get_expected_result() {
        return 1;
    }



};
