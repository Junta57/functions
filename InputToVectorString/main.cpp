#include <iostream>
#include <string>
#include <vector>
#include <fstream>


int main() {

    std::vector<std::string> sort;
    std::string input;

    while (true){
        getline(std::cin, input);
        if (input != "0"){
            sort.push_back(input);
        } else break;
    }

    std::ofstream file;
    file.open("sort.txt");

    for (int i = 0; i < sort.size(); ++i) {
        file << "\"" << sort[i] << "\"";
        if (i != sort.size() - 1){
            file << ", ";
        } else{
            file << " ";
        }
    }
    file.close();

    return 0;
}

