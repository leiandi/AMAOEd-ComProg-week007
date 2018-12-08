//Name:Jameson M. Villaluna
//Date: November 8,2018
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;
main(){
    int Row,i = 0, k, t = 0, first;
    cout << "Enter the number of row: ";
    cin >> Row;
    i = Row;
    first = 1;
    do {
      t = Row;
      do { 
         if (first != 1){
            cout <<" "; 
            t--;
         } 
      }while(t > i);  
       k = 1;
       do {
           cout << "*";
           k++;
       }while(k < (2*i)); 
       cout << "\n";
       i--;
       first =0;
    }while(i >= 1);

    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}
    
