class Solution {
    private static <Element> void printArray(Element[] array) {
        for (Element element : array) {
            System.out.println(element);
        }
    }

    public static void main(String args[]) {
        Integer[] intArray = {1, 2, 3};
        String[] stringArray = {"Hello", "World"};

        printArray(intArray);
        printArray(stringArray);

        if (Solution.class.getDeclaredMethods().length > 2) {
            System.out.println("You should only have 1 method named printArray.");
        }
    }
}
