#include <iostream>
using namespace std;

//By Molestum314

int main()
{
     int i, num, digit, rev = 0;

     cout << " Enter a positive number\t : ";
     cin >> num;

     i = num;

     do
	 {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     	 } 
     	
	 while (num != 0);

cout << endl;

     cout << " The reverse of the number is\t : " << rev << endl;
     
cout << " ------------------------------------------------------ " << endl;

     if (i == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
         
cout << endl;

    return 0;
}
