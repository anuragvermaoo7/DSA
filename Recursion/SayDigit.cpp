#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[])
{

    if(n == 0) //Base Case
        return;

    int digit = n % 10; //Processing 
    n = n / 10;
    
    sayDigit(n, arr);  //Recursive call

    cout << arr[digit] << " ";

}

int main()
{

    string arr[10] = {"zero", "one", "two", "three","four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}
