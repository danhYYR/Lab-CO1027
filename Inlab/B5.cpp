#include <iostream>
#include <fstream>
using namespace std;


void uppercase(string output)   {
    ofstream myfile;
    myfile.open (output);
    for(int i=0;i<output.length();i++)
    {
        if (!std::isupper(output[i]))
        {
            output[i]=toupper(output[i]);
        }
    }

    myfile << output;
    myfile.close();
}
bool check_line(string line)
{
    int line_encoded=std::stoi(line);
    if (line_encoded>=0&&line_encoded<=127)
        return true;
    else   
        return false;
}
void threeChars(string fileName)   {
    string line;
    ifstream myfile;
    myfile.open (fileName);
    if (myfile.is_open())
    {
    while ( getline (myfile,line) )
        {
        cout << check_line(line) << '\n';
        if (line=="***")
            break; 
        }

        myfile.close();
    }
    else{
        cout<<"Unable to open";
    }
}

int main()
{
    // uppercase("./test_file/input.txt");
    threeChars("../test_file/input.txt");
}