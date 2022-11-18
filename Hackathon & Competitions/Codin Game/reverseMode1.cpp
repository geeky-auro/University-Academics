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
    int n;
    cin >> n; cin.ignore();
    string arr1[n],blood[n];
    int iage[n];
    for (int i = 0; i < n; i++) {
        string name;
        string blood_type;
        int age;
        cin >> name >> blood_type >> age; cin.ignore();
        arr1[i]=name;
        blood[i]=blood_type;
        iage[i]=age;
    }
    string arriMax[n];
    string blood_type;
    int age;
    cin >> blood_type >> age; cin.ignore();
    int l=0;
    for(int i=0,k=0;i<n;i++){
        if(blood[i]==blood_type){
            l=k;
            arriMax[k++]=blood_type;
        }
    }
   

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    cout << "NO DONOR AVAILABLE / NO COMPATIBLE DONOR" << endl;
    cout << "or" << endl;
    cout << "MOST COMPATIBLE DONOR: AGE" << endl;
    cout << "OTHER COMPATIBLE DONORS :" << endl;
    cout << "BLABLABLA" << endl;
}