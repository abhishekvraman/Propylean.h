/* Build command in Bazel
    bazel build //main:main
    bazel-bin\main\main
*/
#include "..\lib\ledger.h"
#include <string>
#include <fstream>
#include <iostream>
int main(int argc, char **argv){
    std::string input;
    std::ifstream fin;
    
    fin.open("./main/input1.txt");

    Ledger L;
    
    while (getline (fin, input)){
        L.take_input(input);     
    }
    fin.close();
    return 0;
}