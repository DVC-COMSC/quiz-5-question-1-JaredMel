#include    <iostream>
using namespace std;

int main()
{
   
   int N;
   cout << "Input: ";
   cin >> N;

   for (size_t i = 0; i < N; i++)
   {
      char letter = 65;
      for (size_t j = 0; j <= i; j++)
      {
         cout << letter;
         letter++;
      }
      
   }
   
  
}
