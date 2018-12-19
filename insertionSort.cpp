#include <iostream>

using namespace std;

int main()
{   
   int arr[12] = {9,2,5,1,12,4,7,11,3,6,8,10};
   int current = 0;
   int i=0;

   cout << "The unsorted list: " << endl;
   
   for(int i = 0;i<12;i++){
       cout << arr[i] << " ";

   }

   for(int j = 1; j<12; j++){
       current = arr[j];
       i = j-1;

       while(i>=0 && arr[i]>current){

           arr[i+1] = arr[i];
           i--;

       }

       arr[i+1] = current;

   }

   cout << endl << "The sorted list is: " << endl;
   
   for(int i = 0;i<12;i++){
       cout << arr[i] << " ";

   }

}
