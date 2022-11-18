#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    string st1="",st2="",st3="";
    string arr[]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    for (int i = 0; i < n; i++) {
        string str_1;
        string str_2;
        string str_3;
        cin >> str_1 >> str_2 >> str_3; cin.ignore();
        st1=str_1;
        st2=str_2;
        st3=str_3;
    }
    for (int i = 0; i < n; i++) {
        int l=0,m=0,k=0;
        for (int j = 0; j < 10; j++)
        {
            if (st1==arr[j])
            {
                l=j;
            }
        }

        for (int j = 0; j < 10; j++)
        {
            if (st2==arr[j])
            {
                m=j;    
            }
        }

        for (int j = 0; j < 10; j++)
        {
            if (st3==arr[j])
            {
                k=j;
            }
        }

        cout<<l<<m*pow(10,k)<<endl;
        
        // Write an answer using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
   }
}