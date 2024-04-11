#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int hasBasicCharacters(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Failed to open the file " << filename << endl;
        return false;
    }

    string line;
    int count = 0;
    while (getline(file, line)) {
        for (size_t i = 0; i < line.length(); i++)
            if (line[i] == 'B' || line[i] == 'A' || line[i] == 'S' || line[i] == 'I' || line[i] == 'C')
                count++;
    }
    file.close();
    return count;
}

int main() {
    string filename;
    cout << "Enter the filename to search for \"BASIC\" charters: ";
    cin >> filename;
    cout << filename << " Have " << hasBasicCharacters(filename) << " BASIC charters";

    return 0;
}