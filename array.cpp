#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int size=20;

int table[size];

int main(){
srand((unsigned)time(0));

//Print array:
cout << "The array contains: " <<endl;
for (int i=0; i <=20; i++){
    table[i] = ((rand() %100) + 0);

cout <<table[i]<<", ";

}
cout << '\n';
cout << "This array have "<<size<<" elements."<<endl;
int tableSize = sizeof(table)/sizeof(table[0]);

cout << endl<<"And it's sorted array now: ";
    sort(table,table+tableSize); //sort method from lowest to highest value
    for (int i=0; i<tableSize; i++)
    {
        cout << " "<< table[i]<<", " ;
    }
  return 0;

}

