//Author: Th3Spl
//Date: 12/9/2022
//Discord: https://bit.ly/3OkuXMT
/*Purposes: 
* This (really)simple c++ code will give you all the saved wifi profiles
* Note: USE THIS ONLY ON YOUR COMPUTER!
* THIS IS FOR EDUCATIONAL PURPOSES ONLY
*/

#include <iostream>

using namespace std;

int main() 
{
    system("netsh wlan export profile key=clear");
    return 0;
}
