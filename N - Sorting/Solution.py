n = int(input())
arr = [int(x) for x in input().split(" ")]

num_swaps = 0

for i in range(n):
    for j in range(n - 1):
        if arr[j] > arr[j + 1]:
            tmp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = tmp
            num_swaps += 1

    if num_swaps == 0:
        break

print("Array is sorted in " + str(num_swaps) + " swaps.")
print("First Element: " + str(arr[0]))
print("Last Element: " + str(arr[len(arr) - 1]))



-----------------------------------------------------------
#  Bubble Sort Algorithm for sorting
#Bubble Sort in Python

array = [] #declaration of array


#getting f user inputs and append that values to the array
for x in range(5):
    array.append(eval(input("number " + "")))

n = len(array) #array length
print(array)  #prints initial array (unsorted)


def bubbleSort(array):
    for j in range(n):
        for i in range((n - 1), j, -1):
            if(array[i] < array[i - 1]):
                temp = array[i]
                array[i] = array[i - 1]
                array[i - 1] = temp


bubbleSort(array)
print(array)
