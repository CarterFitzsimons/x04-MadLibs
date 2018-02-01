//Author: Carter Fitzsimons 
#include <iostream>
#include <string>

int main()
{
  std::string Name;
  std::string Liquid;
  int Number;
  char Letter;
  
  std::cout<<"Enter a name."<<std::endl;
  std::cin>>Name;
  std::cout<<"Enter the name of a liquid."<<std::endl;
  std::cin>>Liquid;
  std::cout<<"Enter a number."<<std::endl;
  std::cin>>Number;
  std::cout<<"Enter a single letter grade."<<std::endl;
  std::cin>>Letter;

  std::cout<<"One day in class, "<<Name<<" spilled their "<<Liquid<<" on a peer's laptop.\n\"OMG\" they said, \"That cost me $"<<Number<<"!\"\nThe teacher required "<<Name<<" to replace it, or they would get an "<<Letter<<"."<<std::endl; 
  return 0;
}
