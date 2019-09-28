#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)

struct Person {
    char name[50];
    int age;
    double weight;
};

#pragma pack(pop)

int main() {
    
    Person someone = {"Frodo",220,0.8};
    string fileName = "test.bin";
    
    ofstream outputFile;
    
    outputFile.open(fileName, ios::binary);
    
    if(outputFile.is_open()){
        outputFile.write((char *)&someone, sizeof(Person));
        outputFile.close();
    }
    else {
        cout << "Could not create file " +fileName;
    }
    
    return 0;
}
