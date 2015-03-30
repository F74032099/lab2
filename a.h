#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class BMI{

public:
  string category(float number);
  float BMInum();
  void setheight(float h);
  void setmass(float m);
  float getBMI();

private:
  float height,mass;
  float number;
  string BMIs;


};





