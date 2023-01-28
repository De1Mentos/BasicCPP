#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct FileWork {
private:
    fstream file;
public:
    ios_base::open_mode _open_mode;
    string file_path;
    string readFromFile()
    {
        file.open(file_path, _open_mode);
        string text, res;
        while (getline(file, text))
        {
            res += text;
        }
        file.close();
        return res;
    }
    void writeToFile(string text)
    {
        file.open(file_path, _open_mode);
        if (file.is_open())
        {
            file << text << endl;
            file.close();
        }
    }
    void appendToFile(string text)
    {
        writeToFile(text);
    }
};