#include <iostream>
#include <string>

void createTable(int rows, int columns) {
    char startChar = 'A';

    for (int i = 0; i < rows; i++) {
        for (int j = i; j < columns; j++) {
            std::cout << static_cast<char>(startChar + j);
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows = 26;
    int columns = 26;

    createTable(rows, columns);

    return 0;
}