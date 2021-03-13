#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string dir = "/home/rishav/Templates/";

void create_file(string src,string dst){
    src = dir + src;
    ifstream source(src,ios::binary);
    ofstream dest(dst,ios::binary);
    dest << "/***********************************************\n    AUTHOR :- Rishav Kumar\n    Created at: - " << __TIME__ << " " << __DATE__ << "\n***********************************************/" << endl;
    dest << source.rdbuf();
}
int main(int argc,char **argv){
    if(argc <= 2){
        cout << __TIME__ << endl;
        cout << "Provide mode and file name" << endl;
        cout << "Eg: $load i temp.cpp" << endl;
        return 0;
    }
    string mode(argv[1]);
    string fname(argv[2]);

    if(mode == "i")
        create_file("intermediate.cpp",fname);
    else if(mode == "b")
        create_file("basic.cpp",fname);
    else if(mode=="m")
        create_file("minimalist.cpp",fname);
    else {
        cout << "Provide mode and file name" << endl;
        cout << "Eg: $load i temp.cpp" << endl;
        cout << "----------------------------------" << endl;
        cout << "Possible options:" << endl;
        cout << "i: intermediate.cpp\nb: basic.cpp\nm: minimalist.cpp\np: pro.cpp" << endl;
        return 0;
    }
    cout << "File successfully created" << endl;
    string command = "code " + fname;
    system(command.c_str());
    return 0;
}