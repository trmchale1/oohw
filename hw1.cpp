// This is my first hw assignment

// Fix 6 by fixing profitRate
 // Then hand in
 
#include <iostream>
#include <fstream> 
using namespace std;

  ifstream infile;
  ofstream outfile;

int profitRate(int array[4]);


int profitLossQ1(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int profitLossQ2(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int profitLossQ3(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int profitLossQ4(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);

int bestItemQ1(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int bestItemQ2(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int bestItemQ3(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);
int bestItemQ4(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4]);

int bestProfit(int array[4]);

int totalProfit(int array[4]);

int avgProfit(int array[4]);

int profitRate(int a[4])
{
	if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3])
		outfile << "Profits are increasing" << endl;
	
	else if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3])
	        outfile << "Profits are decreasing" << endl;
	else
		outfile << "Profits are up and down" << endl;
		
		return 0;

}

int profitLossQ1(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
  
  
        int pos = 0;
	int neg = 0;
	
	if (toaster[0] < 0)
		neg++;
	else 
		pos++;	

	if (tv[0] == 0)
		neg++;
	else 
		pos++;
	if (radio[0] < 0)
 		neg++;
 	else 
  		pos++;
	if (lamps[0] < 0)
		neg++;
	else 
		pos++;
	if (books[0] < 0)
		neg++;
	else 
		pos++;
		
		outfile << "There were " << pos << " profitable items and " << neg <<  " unprofitable items in Q1" << endl;
		return 0;
}

int profitLossQ2(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
	int pos = 0;
	int neg = 0;
	
	if (toaster[1] < 0)
		neg++;
	else 
		pos++;	
	
	if (tv[1] < 0)
		neg++;
	else 
		pos++;
	
	

	if (radio[1] < 0)
		neg++;
	else 
		pos++;
	if (lamps[1] < 0)
		neg++;
	else 
		pos++;
	if (books[1] < 0)
		neg++;
	else 
		pos++;
		
		outfile << "There were " << pos << " profitable items and " << neg <<  " unprofitable items in Q2" << endl;
		return 0;    
}

int profitLossQ3(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
	int pos = 0;
	int neg = 0;
	
	if (toaster[2] < 0)
		neg++;
	else 
		pos++;	
	
	if (tv[2] < 0)
		neg++;
	else 
		pos++;
	if (radio[2] < 0)
		neg++;
	else 
		pos++;
	if (lamps[2] < 0)
		neg++;
	else 
		pos++;
	if (books[2] < 0)
		neg++;
	else 
		pos++;
		
		outfile << "There were " << pos << " profitable items and " << neg <<  " unprofitable items in Q3" << endl;

	return 0;
}

int profitLossQ4(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
	int pos = 0;
	int neg = 0;
	
	if (toaster[3] < 0)
		neg++;
	else 
		pos++;	

	if (tv[3] < 0)
		neg++;
	else 
		pos++;
	if (radio[3] < 0)
		neg++;
	else 
		pos++;
	if (lamps[3] < 0)
		neg++;
	else 
		pos++;
	if (books[3] < 0)
		neg++;
	else 
		pos++;
		
	outfile << "There were " << pos << " profitable items and " << neg <<  " unprofitable items in Q4" << endl;
	return 0;
}

int bestItemQ1(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
  int x;
  string y;
  if (toaster[0] > tv[0])
    {
      x = toaster[0];
      y = "toaster"; 
    }
  else {
    x = tv[0];
    y = "television";
  }
  if (radio[0] > x)
    {
      x = radio[0];
      y = "radio";
    }
  else;
  if(lamps[0] > x )
    {
      x = lamps[0];
      y = "lamps";
    }
  else;
  if(books[0] > x)
    {
      x = books[0];
      y = "books";
    }
  else;
  outfile << y << endl;
  return x;
}

int bestItemQ2(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
  int x;
  string y;
  if (toaster[1] > tv[1])
    {
      x = toaster[1];
      y = "toaster"; 
    }
  else {
    x = tv[1];
    y = "tv";
  }
  if (radio[1] > x)
    {
      x = radio[1];
      y = "radio";
    }
  else;
  if(lamps[1] > x )
    {
      x = lamps[1];
      y = "lamps";
    }
  else;
  if(books[1] > x)
    {
      x = books[1];
      y = "books";
    }
  else;
  
  outfile << y << endl;

return x;  
}

int bestItemQ3(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
  int x;
  string y;
  if (toaster[2] > tv[2])
    {
      x = toaster[2];
      y = "toaster"; 
    }
  else {
    x = tv[2];
    y = "tv";
  }
  if (radio[2] > x)
    {
      x = radio[2];
      y = "radio";
    }
  else;
  if(lamps[2] > x )
    {
      x = lamps[2];
      y = "lamps";
    }
  else;
  if(books[2] > x)
    {
      x = books[2];
      y = "books";
    }
  else;
  
  outfile << y << endl;

  return x;  
}

int bestItemQ4(int toaster[4], int tv[4], int radio[4], int lamps[4], int books[4])
{
  int x;
  string y;
  if (toaster[3] > tv[3])
    {
      x = toaster[3];
      y = "toaster"; 
    }
  else {
    x = tv[3];
    y = "tv";
  }
  if (radio[3] > x)
    {
      x = radio[3];
      y = "radio";
    }
  else;
  if(lamps[3] > x )
    {
      
      x = lamps[3];
      y = "lamps";
    }
  else;
  if(books[3] > x)
    {
      x = books[3];
      y = "books";
    }
  else;
  
  outfile << y << endl;

  return x;
}

int bestProfit(int numb[4])
{
  int temp;
  for (int pass = 0; pass < 4 - 1; pass++)
    {
      for(int cand = pass + 1; cand < 4; cand++)
	{
	  if (numb[pass] > numb[cand]){
	    temp = numb[pass];
	    numb[pass] = numb[cand];
	    numb[cand] = temp;
	  }
	}
    }
  
  return numb[3];
}

int avgProfit(int array[4])
{
  int totsProfits = array[0] + array[1] + array[2] + array[3];
  int avgProfit = totsProfits / 4;
  return avgProfit;
}

int totalProfit(int array[4])
{
  int totsProfits = array[0] + array[1] + array[2] +  array[3];
  return totsProfits;
}

int main ()
{
    infile.open("h1in.txt");
    outfile.open("h1out.txt");

   int toaster[4];
   int tv[4];
   int radio[4];
   int books[4];
   int lamps[4];
  
   for (int i = 0; i <=3; i++)
     {
       infile >> toaster[i];
       infile >> tv[i];
       infile >> radio[i];
       infile >> lamps[i];
       infile >> books[i];
     }

   outfile << profitRate(toaster) << endl;
   outfile << profitRate(tv) << endl;
   outfile << profitRate(radio) << endl;
   outfile << profitRate(books) << endl;
   outfile << profitRate(lamps) << endl;

   outfile << endl;
   outfile << endl;

   outfile << profitLossQ1(toaster, tv, radio, lamps, books) << endl;
   outfile << profitLossQ2(toaster, tv, radio, lamps, books) << endl;
   outfile << profitLossQ3(toaster, tv, radio, lamps, books) << endl;
   outfile << profitLossQ4(toaster, tv, radio, lamps, books) << endl;

   outfile << endl;
   outfile << endl;

   outfile <<"The item with the greatest profit in quarter 1 was " << bestItemQ1(toaster, tv, radio, lamps, books) << endl;
   outfile << "The item with the greatest profit in quarter 2 was " << bestItemQ2(toaster, tv, radio, lamps, books) << endl;
   outfile << "The item with the greatest profit in quarter 3 was "<<bestItemQ3(toaster, tv, radio, lamps, books) << endl;
   outfile << "The item with the greatest profit in quarter 4 was "<<bestItemQ4(toaster, tv, radio, lamps, books) << endl;

   outfile << endl;
   outfile << endl;
   
   outfile << "Product  " << "Q1 Profits      " << "Q2 Profits       " << "Q3 Profits      " << "Q4 Profits    " << "    Total Profits"<< endl;
   outfile << "Toaster     " << toaster[0] <<"             " <<toaster[1] << "               " << toaster[2] << "             " << toaster[3] << "               " << totalProfit(toaster) << endl;
   outfile << "Television  " << tv[0] << "            " << tv[1] << "               " << tv[2] << "             " << tv[3] << "               " << totalProfit(tv) << endl;

   outfile << "Radio" << "       " << radio[0] << "             " << radio[1] << "               " << radio[2] << "             "<< radio[3] << "               " << totalProfit(radio) << endl;


   outfile << "Books" <<"       " << books[0] << "             " << books[1] << "               " << books[2] << "             " << books[3] << "               " << totalProfit(books) << endl;

   outfile << "Lamps" << "       " << lamps[0] << "              " << lamps[1] << "               " << lamps[2] << "             "  << lamps[3] << "               " << totalProfit(lamps) << endl;

   outfile << endl;
   outfile << endl;

   outfile << "Product      " << "Average Profit" << "     Best Profit"<< endl;

   outfile << "Toaster             " << avgProfit(toaster) << "            "<<bestProfit(toaster) << endl;
   outfile << "Television          " << avgProfit(tv) << "            " << bestProfit(tv) <<endl;
   outfile << "Radio               " << avgProfit(radio) << "            " <<bestProfit(radio) << endl;
   outfile << "Books               " << avgProfit(books) << "            " <<bestProfit(books) << endl;
   outfile << "Lamps               " << avgProfit(lamps) << "            " <<bestProfit(lamps) <<endl;

	
	outfile << endl;
	outfile << endl;
	
	outfile << profitRate(toaster) << endl;
	outfile << profitRate(tv) << endl;
	outfile << profitRate(radio) << endl;
	outfile << profitRate(lamps) << endl;
	outfile << profitRate(books) << endl;
		
  infile.close();
  outfile.close();
  return 0;
}
