#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>

using namespace std;

void treatment(vector<string> &readfile) {
    for (int i = 0; i < readfile.size(); i++) {

        int j = 0;
        string strbuf = readfile.at(i);
        int len = readfile.at(i).length();

        while (j < len) {
            switch (strbuf[j]) {
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case '0':
                case ' ': {
                    char buf;
                    int len = strbuf.length();
                    for (int l = j; l < len; l++) {
                        buf = strbuf[l + 1];
                        strbuf[l] = buf;
                    }
                    strbuf = strbuf.substr(0, len - 1);
                    break;
                }
                default:
                    j++;
                    break;
            }
        }
        readfile.at(i) = strbuf;
    }
}


int main() {
    setlocale(LC_ALL, "rus");
    string buff;
    ifstream fin("/home/pda/CLionProjects/4task/input.txt");


    vector<string> readfile;

    if (!fin.is_open()) // если файл не открыт
        cout << "Файл не может быть открыт!\n"; // сообщить об этом
    else {
        while (!fin.eof()) {
            getline(fin, buff);
            readfile.push_back(buff);
        }
        fin.close(); // закрываем файл

    }
    treatment(readfile);
    ofstream fout("/home/pda/CLionProjects/4task/input.txt", ios_base::trunc);

    for (int i = 0; i < readfile.size(); i++) {
        fout << readfile.at(i) << endl;
    }
    fout.close();

    return 0;
}