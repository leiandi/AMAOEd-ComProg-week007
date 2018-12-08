//Name:Jameson M. Villaluna
//Date: November 8,2018
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    int i = 0,t = 1, Row;
    cout << "Enter the Number of row: ";
    cin >> Row;
    while (i < Row){
    i++;
    t = 1;
    while(t <= i){
        cout<<"*";
        t++;
    
    }
    cout<<endl;
}
   system("pause");
    return EXIT_SUCCESS;
}
    
