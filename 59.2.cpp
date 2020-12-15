# include <iostream>
# include <fstream>
using  namespace  std ;

class  liczba_zad
{
    int liczba;

  public:
    int  odwroc_liczbe (); // na wyniku odwrocona liczba
    bool  czy_suma_jest_palindromem (); // glowna funkcja liczaca wyliczaj1ca czy liczba i jej odwrotnosc jest palindromem
  	
  private:
// wewnetrzne tylko dla tej klasy do u?ycja metody w funkcjach np. publiczny
    string zamien_liczbe_na_string ();
    string odwroc_liczbe_str (string liczbastr); // z tej funkcji korzysta z funkcji odwroc_liczbe ()
	bool  czy_palindrom_string (string liczbastr); // od konca znak = od poczatku
};
void  liczba_zad :: odwroc_liczbe ()
{
   string wynik = odwroc_liczbe_str ( zamien_liczbe_na_string (liczba));

 	string str = wynik;
    int liczba_2 = strtol (str. c_str (), nullptr , 10 );
	int suma = liczba_2 + liczba;
	string suma1 = zamien_liczbe_na_string (suma);
	}
	
void  liczba :: czy_suma_jest_palindromem ()
{
	bool tak_czy_nie = czy_palindrom_string (string suma1);
}
void  liczba_zad :: odwroc_liczbe_str (string liczba)
{
	ifstream plik;

	plik. open ( " a.txt " );

	while (plik. good ()) {
	plik >> liczba;

	
    zrobia
    {
        cout << liczba% 10 ;
        liczba / = 10 ;
    } while (liczba);
}
}
void  liczba_zad :: czy_palindrom_string (string liczba)
{
	int back = liczba_2 () - 1 ;
	bool palindrome = true ;
	for ( int i = 0 ; i <liczba. length () / 2 && palindrome; i ++)
	if (liczba [i]! = liczba [back--])
	palindrome = false ;
}
void  liczba_zad :: zamien_liczbe_na_string ()
{
    string str = to_string (liczba);
}
int  main ( int argc, char ** argv) {
	liczba_zad l;
	l. odwroc_liczbe ();
	l. czy_suma_jest_palindromem ();
	
	return  0 ;
}
