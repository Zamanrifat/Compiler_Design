#include <iostream>
using namespace std;

int main() {
    int i, size, max,min, Array[100];

    cout << "Enter the size of The array :";
    cin >> size;

    cout<< " \n Please inter the elements of the array :";
      for (int i = 0; i <= size-1; i++)
        cin >> Array[i];
       max =  Array[0];
       for (i = 0; i < size; i++)
       {
           if(max < Array[i])
            max = Array[i];
       }
       min =  Array[0];
       for (i = 0; i < size; i++)
       {
           if(min > Array[i])
            min = Array[i];
       }
       cout<< " Largest Element of the array is : " <<max<<endl;
       cout<< " Smallest Element of the array is : " <<min<<endl;
    return 0;
}
