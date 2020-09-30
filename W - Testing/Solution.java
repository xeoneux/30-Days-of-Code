public class Solution {

    static class TestDataEmptyArray {
        public static int[] get_array() {
            return new int[0];
        }
    }

    static class TestDataUniqueValues {
        public static int[] get_array() {
            return new int[]{11, 3, 7, 2, 4, 86, 13};
        }

        public static int get_expected_result() {
            return 3;
        }
    }

    static class TestDataExactlyTwoDifferentMinimums {
        public static int[] get_array() {
            return new int[]{13, 12, 321, 61, 67, 34, 12};
        }

        public static int get_expected_result() {
            return 1;
        }
    }
}
