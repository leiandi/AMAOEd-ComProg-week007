//Name:Jameson M. Villaluna
//Date: November 8,2018
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    int Row,i,t,j;
    cout << "Enter the number of row: ";
    cin >> Row;
    for (int i = Row ;i >= 1; i--)
    {
        for (int t = 1; t <= i; t++)
        {
            cout << " ";
        }
        for (j = Row; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}
    
