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
cout<< "\n The Array is : ";
for( int i = 0; i <= size-1; i++)
{
    cout<< Arr[i] << ",";
}
int odd_count = 0, even_count = 0;
for (int i = 0; i <= size-1; i++)
{
    if(Arr[i]%2 == 0)
    {
        even_count = even_count + 1;
    }
    else
    {
        odd_count = odd_count + 1;
    }
}
cout<<endl<<endl;
cout<<"Number of odd integer :"  <<odd_count <<endl;
cout<<"Number of even integer :"  <<even_count <<endl;
return 0;
}
