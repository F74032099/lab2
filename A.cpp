#include"a.h"


int main()
{

  BMI bmi;
  float h,m;
  float x;

     ifstream inFile("file.in",ios::in);
     if(!inFile){
       cerr<<"ERROR!(inputfile)"<<endl;
       exit(1);

     }
     ofstream outFile("file.out" , ios::out);
     if(!inFile){
       cerr<<"ERROR!(outputfile)"<<endl;
       exit(2);
     }

    while(inFile >> h >> m)
     {

         bmi.setheight(h);
         bmi.setmass(m);
         bmi.BMInum();
         x=bmi.getBMI();
         outFile<< setprecision(4) << bmi.getBMI()<< "\t" << bmi.category(x) << endl;


     }

return 0;

}
                                    

