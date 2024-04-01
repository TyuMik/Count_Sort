#include <iostream>

void count_sort(int* arr, int size) {

    const int k = (24 - 10);

    int counts[k]{ 0 };

    for (int i = 0; i < size; i++) {
        counts[arr[i] - 10] += 1;
    }

    int c = 0;

    for (int i = 0; i < size; i++) {
        while (counts[c] == 0) {
            c += 1;
        }
        arr[i] = c + 10;
        counts[c] -= 1;
    }
}

void print_sorted_arr(int* arr, int size) {

    std::cout << "Исходный массив: " << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Отсортированный массив: " << std::endl;

    count_sort(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int arr1[] { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
    int size1 = sizeof(arr1) / sizeof(int);

    int arr2[]{ 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21,
        17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
    int size2 = sizeof(arr2) / sizeof(int);

    int arr3[]{ 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22,
        19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };
    int size3 = sizeof(arr3) / sizeof(int);

    print_sorted_arr(arr1, size1);
    print_sorted_arr(arr2, size2);
    print_sorted_arr(arr3, size3);
    
    return 0;
}