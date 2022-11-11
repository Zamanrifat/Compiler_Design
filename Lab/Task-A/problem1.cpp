#include <iostream>
using namespace std;

int main (){
int size;
cout<< "Enter the size of The array : ";
cin>> size;

int Arr[size];
cout<< " \n Please inter the elements of the array :";
for (int i = 0; i <= size-1; i++)

{
    cin>> Arr[i];
}
cout<< "\n Array in normal order : ";
for( int i = 0; i <= size-1; i++)
{
    cout<< Arr[i] << ",";
}
cout<< "\n Array in reverse order : ";
for( int i = size-1; i >= 0; i--)
{
    cout<< Arr[i] << ",";
}
cout<<endl;
return 0;
}
