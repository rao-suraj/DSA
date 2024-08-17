#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* output file stream. Used to write data into files*/
    // ofstream MyFile("text.txt");

    // MyFile<<"Hello";

    /* Input file streams */
    // ifstream MyFile("text.txt");
    // string line;
    // char c;
    // while (MyFile.get(c)) {
    //     cout << c << endl;
    // }

    // MyFile.close();

    /* f stream */
    fstream fs;

    fs.open("text.txt",fstream::out);
    if(fs.is_open()) {
        cout<<"TRUE";
    } else {
        cout<<"FALSE";
    }
    char str[]= "Suraj";
    try{fs.write(str,sizeof(str));}catch(const runtime_error e) {
        cout<<e.what();
    }
    return 0;
}