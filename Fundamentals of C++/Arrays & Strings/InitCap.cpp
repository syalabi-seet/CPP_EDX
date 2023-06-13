#include <iostream>
#include <string>
using namespace std;


int main()
{
    string sentence;
    cout << "Enter the String:" << endl;
    getline(cin, sentence);

    char delimiter{' '};
    bool already_upper{true};

    for (int i = 0; i < sentence.length(); i++)
    {
        if (i == 0) // First letter in sentence
        {
            sentence[i] = toupper(sentence[i]);
        }
        else if (sentence[i] == delimiter)
        {
            if (sentence[i+1] >= 'a' && sentence[i+1] <= 'z')
            {
                sentence[i+1] = toupper(sentence[i+1]);
                already_upper = false;
            }            
        }
    }

    if (already_upper == true)
    {
        cout << "First character in each word are already in uppercase" << endl;
        return 0;
    }

    cout << sentence << endl;
    return 0;
}