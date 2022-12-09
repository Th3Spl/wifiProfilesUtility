//Author: Th3Spl
//Date: 12/9/2022
//Discord: https://bit.ly/3OkuXMT
/*Purposes: 
* This (really)simple c++ code will give you all the saved wifi profile
* Note: USE THIS ONLY ON YOUR COMPUTER!
* DONE'T USE THIS FOR MAKE ANY TYPE OF DAMAGE TO SOMEONE ELSE
* THIS IS FOR EDUCATIONAL PURPOSES ONLY
*/

#include <iostream>

using namespace std;

int main() 
{
    system("netsh wlan export profile key=clear");
    return 0;
}