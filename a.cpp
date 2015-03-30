#include"a.h"

  string BMI::category(float number)
  {

     if(number<15.0)
        return BMIs = "Very severely underweight";
     else if (15.0<=number && number<16.0)
        return BMIs = "Severely underweight";
     else if (16.0<=number && number<18.5)
        return BMIs = "Underweight";
     else if (18.5<=number && number<25.0)
        return BMIs = "Normal";
     else if (25.0<=number && number<30.0)
        return BMIs = "Overweight";
     else if (30.0<=number && number<35.0)
        return BMIs = "Obese Class I(Moderately obese)";
     else if (35.0<=number && number<40.0)
        return BMIs = "Obese Class II(Severely obese)";
     else if(number>=40.0)
        return BMIs = "Obese Class III(Very severely obese)";
  }


  float BMI::BMIdata()
  {
     ifstream inFile("file.in",ios::in);
     if(!inFile){
       cerr<<"ERROR!(inputfile)"<<endl;
       exit(1);
  }
     ofstream outFile("file.out" , ios::out);
     if(!inFile){
       cerr<<"ERROR!(outputfile)"<<endl;
       exit(1);
  }

   while(inFile >> height >> mass){

     BMInumber = 10000*mass/(height*height);

     if(height!=0){
category(BMInumber);
     outFile << setprecision(4)<< BMInumber << "\t" << BMIs << endl;


     }
   }

   } 







