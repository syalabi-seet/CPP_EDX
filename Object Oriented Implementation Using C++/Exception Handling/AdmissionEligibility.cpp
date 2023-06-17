#include <iostream>
using namespace std;

double eligibility_ForAdmission(int a,int b,int c) 
{
    //Implement your code here
    if 
    return 0;
}

int main()
{
    float phyMarks;
    float chemMarks;
    float mathMarks;
    cout<<"Enter the Physics Marks"<<endl;
    cin>>phyMarks;
    cout<<"Enter the Chemistry Marks"<<endl;
    cin>>chemMarks;
    cout<<"Enter the Maths Marks"<<endl;
    cin>>mathMarks;
    //fill the code here
    try
    {
        eligibility_ForAdmission(phyMarks, chemMarks, mathMarks);
        //Implement your code here
    } catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
}

