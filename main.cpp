Ось базовий приклад коду на C++, який обробляє дані:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

// Функція для введення даних
void inputData(std::vector<int>& data) {
    for (int i = 0; i < data.size(); ++i) {
        std::cin >> data[i];
    }
}

// Функція для виводу даних
void outputData(const std::vector<int>& data) {
    for (const auto& element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

// Функція для обчислення середнього значення
double computeAverage(const std::vector<int>& data) {
    int sum = 0;
    for (const auto& element : data) {
        sum += element;
    }
    return static_cast<double>(sum) / data.size();
}

// Функція для пошуку мінімального значення
int findMinimum(const std::vector<int>& data) {
    return *std::min_element(data.begin(), data.end());
}

// Функція для пошуку максимального значення
int findMaximum(const std::vector<int>& data) {
    return *std::max_element(data.begin(), data.end());
}

// Функція для сортування даних
void sortData(std::vector<int>& data) {
    std::sort(data.begin(), data.end());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> data(n);
    std::cout << "Enter the elements: ";
    inputData(data);

    std::cout << "Data: ";
    outputData(data);

    std::cout << "Average: " << computeAverage(data) << std::endl;
    std::cout << "Minimum: " << findMinimum(data) << std::endl;
    std::cout << "Maximum: " << findMaximum(data) << std::endl;

    sortData(data);
    std::cout << "Sorted data: ";
    outputData(data);

    return 0;
}
```

Цей код виконує різні операції обробки даних, включаючи введення, вивід, обчислення середнього значення, пошук мінімального та максимального значень, а також сортування даних.