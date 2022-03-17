#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    int count = 0;
    string line;
    fstream fp;

    fp.open("main.txt");

    fp <<"Writing to a file";

    while(getline(fp, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
                count++;
        }
    }
    cout << "Number of white-space characters" << " is " << count << endl;

    fp.close();

    return 0;

}