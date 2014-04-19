// The program is done
// Except!
// When we sort the values we don't know what boros the numbers were assigned to
// We need to print the sorted values with the boro next to it
#include <iostream>
#include <fstream>
using namespace std;

ifstream infile;
ofstream outfile;

int getNumAccidents(string boroName);

int findLowest(int accident[]);

int getNumAccidents(string boroName)
{
  int accident;
  cout << "How many accidents were there in " << boroName << "?" << endl;
  cin >> accident;
  if (accident > 0)
  return accident;
  else 
    {
      cout << "Do not enter a negative number, restart program";
      exit(1);
	return 0;
    }
}

int findLowest(int accident[])
{
  int i, j, minIndex, tmp;
  for(i = 0; i < 5 - 1; i++)
    {
      minIndex = i;
      for (j = i + 1; j < 5; j++)
	if (accident[j] < accident[minIndex])
            minIndex = j;
      if (minIndex != i){
	tmp = accident[i];
	accident[i] = accident[minIndex];
	accident[minIndex] = tmp;
      }
     }
 
  return 0;
}

int main()
{
  string boro[5] =  {"Manhattan", "Brooklyn", "Queens", "Bronx", "Staten Island"};

  int accident[5]; 
  
  accident[0] = getNumAccidents(boro[0]);
  
  accident[1] = getNumAccidents(boro[1]);
  
  accident[2] = getNumAccidents(boro[2]);

  accident[3] = getNumAccidents(boro[3]);

  accident[4] = getNumAccidents(boro[4]);

  findLowest(accident);

  for (int i = 0; i <= 4; i++)
    {
      cout << accident[i] << endl;
    }


  return 0;
}
