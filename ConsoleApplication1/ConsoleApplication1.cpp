// Example program
#include <iostream>

bool check(char bad[256], char text[256]) {
    int i = 0;
    int j = 0;
    while (text[i] != '\0') {
        j = 0;
        while (bad[j] != '\0') {
            if (text[i] == bad[j])
                return false;
            j++;
        }
        i++;
    }
    return true;
}

int main()
{
    char bad[256];
    char text[256];

    std::cout << "INSERT TEXT ";
    std::cin >> text;
    std::cout << "INSERT MASK ";
    std::cin >> bad;

    if (check(bad, text))
        std::cout << "TRUE";
    else
        std::cout << "FALSE";
}
