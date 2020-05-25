#include <iostream>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	queue < string > kolejka;
	
	string liczba;
    fstream plik;
    int l;
    //
	plik.open("C:\\Users\\Eryk\\Desktop\\Files\\Programowanie\\2505\\x.txt");
  	//
  	cout << "ContentType:application/json;charset=UTF-8" << (char)13 << (char)10;
  	 if(plik.good())  //sprawdzenie czy plik istnieje
            
			while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
        {
                getline(plik,liczba);
				kolejka.push( liczba );
				l++;
				cout << "\n"
      				<< "[ \n "
          			<<"{liczba " << l << "} :"<<" {"<<liczba<<"}"<< "\n"
          			<< "]\n";
                

        }


                   plik.close();  //zamkniecie pliku tekstowego
  	
  	
    	

 return 0;
}
