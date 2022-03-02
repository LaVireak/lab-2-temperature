// Accept the temperature in Celsius and convert it into Kelvin and Fehrenheit
#include <iostream> // This is the directive for input and output
using namespace std; // use standard namespace
int main() // main function 
{ // to open the main function block
    float c,f,k; // c for celsius, f for fahrenheit and k for kelvin
    cout<<"Enter degrees in celsius "; // ask the user to enter degrees in celsius
    cin>>c; // accept the celsius
    f = 9.0/5 * c + 32.0; // formula of fahrenheit
    k = c + 273.0; // formula of kelvin 
    cout<<"\nThe value of "<<c<<" degrees C in K is: "<<k; // tell us about the value of degrees C in K
    cout<<"\nThe value of "<<c<<" degrees C in F is: "<<f; // tell us about the value of degrees C in F
    return 0; // return 0 to the console 
} // close the main function