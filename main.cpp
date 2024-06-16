#include <iostream>
#include <vector>

std::vector<int> moduloSort(std::vector<int> &vector) {
    for (int k = 0; k < vector.size() - 1; k++) {
        for (int i = 0; i < vector.size() - k - 1; i++) {
            if ((abs(vector[i]) > abs(vector[i + 1])) && (i + 1 < vector.size())) {
                std::swap(vector[i], vector[i + 1]);
            }
        }
    }
    return vector;
}

void printVector(std::vector<int> &vector) {
    for (int i : vector) {
        std::cout << i << " ";
    }
}

int main() {
    std::vector<int> vector = {-100, -50, -5, 1, 10, 15};
    moduloSort(vector);
    printVector(vector);
}
