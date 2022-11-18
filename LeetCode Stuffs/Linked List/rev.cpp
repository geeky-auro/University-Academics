#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    int max=s[0];
    for(int i=1;i<s.length();i++){
        if((int)s[i]>=max){
            max=(int)s[i];
        }
    }
    int min=s[0];
    for(int i=1;i<s.length();i++){
        if((int)s[i]<min){
            min=(int)s[i];
        }
    }
    cout<<(char)max<<endl;
    cout<<(char)min<<endl;
}