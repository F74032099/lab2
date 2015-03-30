#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class BMI{

public:
  string category(float number);
   float BMIdata();
private:
  float height,mass;
  float BMInumber;
  string BMIs;
};





