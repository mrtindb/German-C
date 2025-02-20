#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;
int main(int argc, char **argv) {
    if(argc!=2) {
        cerr<<"usage: interpreter file_name"<<endl;
        exit(EXIT_FAILURE);
    }
    fstream inputFile(argv[1], ios::in);
    if(!inputFile) {
        cerr<<"error opening file"<<endl;
        exit(EXIT_FAILURE);
    }
}