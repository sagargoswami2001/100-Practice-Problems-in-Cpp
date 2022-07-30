// Write a Program to Copy the Content of a file ABC into another file XYZ.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ifstream ABC_file{"org.txt"};
    ofstream XYZ_file{"copy.txt"};
    if(ABC_file && XYZ_file)
    {
        while(getline(ABC_file,line))
        {
            XYZ_file<<line<<"\n";
        }
        cout<< "copy finished\n";
    }
    else
    {
        cout<< "cannot read file";
    }
    ABC_file.close();
    XYZ_file.close();
    return 0;
}
