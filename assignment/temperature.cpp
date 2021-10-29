//All of his forecasts describe the temperature in Fahrenheit degrees.
//Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
//The formula is the following: c = (f-32)/1.8;

#include <iostream>

int main() {
  double tempf = 0;
  double tempc = 0;
  
  tempc = (tempf-32)/1.8;
  std::cin >> tempf;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
   
}