#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

void insertionSort(Student arr[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].score > key.score) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    
    Student students[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, students[i].name);
        std::cout << "Enter the score of student " << i + 1 << ": ";
        std::cin >> students[i].score;
    }

    insertionSort(students, n);

    std::cout << "\nStudents sorted by score:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Name: " << students[i].name << ", Score: " << students[i].score << std::endl;
    }

    return 0;
}
