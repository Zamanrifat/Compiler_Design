#include <iostream>
using namespace std;

int main() {
    int i, size, sum, Array[100];
    float average;

    cout << "Enter the size of The array :";
    cin >> size;

    cout<< " \n Please inter the elements of the array :";
      for (int i = 0; i <= size-1; i++)

    {
        cin >> Array[i];
    }

    sum = 0;

    for(i = 0; i < size; i++) {
        sum += Array[i];
    }

    average = (float)sum / size;
    cout << "Average value of the array element is : " << average;

    return 0;
}
