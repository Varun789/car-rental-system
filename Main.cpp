// Car Rental System
// Mini Project [ CE142 ]

// Header Files
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<sstream>

// User Defined Header Files
#include "Color.h"

// Namespaces
using namespace std ;

// Class
class Car
{
public :
    string CName , FType , Mileage , Seat , MYear , I_km , Engine ;

    void Bill(string C_Name ,string  C_Number ,string Type ,string CName ,long int fkm ,long int ikm ,int Advance )
    {
        system("CLS") ;
        long int totalkm = fkm - ikm ;
        cout << "\n\n\n" ;
        for(int i = 0 ; i<30 ; i++)
        {
            if(i==0 || i==24 || i==29)
                cout << "\n**************************************************************************** ";

            else if (i==5)
                cout << "\n*\t Name :: " << C_Name ;

            else if(i==7)
                cout << "\n*\t Number :: " << C_Number ;

            else if (i==13)
                cout << "\n*\t Initial Kms :: " << ikm ;

            else if(i==14)

                cout << "\n*\t Final Kms   :: " << fkm ;


            else if (i==16)
                cout << "\n*\t Km Driven :: " << totalkm ;

            else if (i==17)
                cout << "\n*\t Advance   :: " << Advance ;

            else if (i==20)
                cout << "\n*\t Total ::  " << totalkm*5 << "  Rs. " ;

            else if (i==27)
                cout << "\n*\t\t\t Amount To Pay ::  " << ((totalkm*5)-Advance) << "  Rs. " ;

            else
                cout << "\n*                                                                          *" ;
        }
        cout<< "\n\n\n" ;
    }
}Car1;

class SUV : public Car
{
public :
    void SUVCarDetails()
    {
        system("CLS") ;
        cout << "\n\n" ;
        cout << "\t *************************************\n " ;
        cout << "\t *         Car Details : ---         *\n " ;
        cout << "\t *************************************\n " ;

        cout << "\n\n\t Name               :  " << CName << endl ;
        cout << "\n\t Mileage [kmpl]     :  " << Mileage << endl ;
        cout << "\n\t Fuel Type          :  " << FType << endl ;
        cout << "\n\t Manufacturing Year :  " << MYear << endl ;
        cout << "\n\t Engine             :  " << Engine << endl ;
        cout << "\n\t No. of Seats       :  " << Seat << endl ;
        cout << "\n\t Km Driven          :  " << I_km << endl ;
    }
} SUV1 ;

class Sedan : public Car
{
public :
    void SedanCarDetails()
    {
        system("CLS") ;
        cout << "\n\n" ;
        cout << "\t *************************************\n " ;
        cout << "\t *         Car Details : ---         *\n " ;
        cout << "\t *************************************\n " ;

        cout << "\n\n\t Name               :  " << CName << endl ;
        cout << "\n\t Mileage [kmpl]     :  " << Mileage << endl ;
        cout << "\n\t Fuel Type          :  " << FType << endl ;
        cout << "\n\t Manufacturing Year :  " << MYear << endl ;
        cout << "\n\t Engine             :  " << Engine << endl ;
        cout << "\n\t No. of Seats       :  " << Seat << endl ;
        cout << "\n\t Km Driven          :  " << I_km << endl ;
    }
} Sedan1 ;

class MUV : public Car
{
public :
    void MUVCarDetails()
    {
        system("CLS") ;
        cout << "\n\n" ;
        cout << "\t *************************************\n " ;
        cout << "\t *         Car Details : ---         *\n " ;
        cout << "\t *************************************\n " ;

        cout << "\n\n\t Name               :  " << CName << endl ;
        cout << "\n\t Mileage [kmpl]     :  " << Mileage << endl ;
        cout << "\n\t Fuel Type          :  " << FType << endl ;
        cout << "\n\t Manufacturing Year :  " << MYear << endl ;
        cout << "\n\t Engine             :  " << Engine << endl ;
        cout << "\n\t No. of Seats       :  " << Seat << endl ;
        cout << "\n\t Km Driven          :  " << I_km << endl ;
    }
} MUV1 ;

// Manipulator 4 system("CLS") & system("PAUSE");
ostream &ps ( ostream &k )
{
    k << system("PAUSE") ;
    return k ;
}

ostream &cls ( ostream &k )
{
    k << system("CLS") ;
    return k ;
}

// Main function
int main()
{
    string C_Name , C_Number , Advance ;

    SetColor(3);                                            // Sets Output Text Color Between 1 to 15

    char smiley = 1 ;
    cout<<"\n\n\n\n\n\t\t\t"<<smiley<<smiley<<"   Welcome To CAR RENTAL SHOP "<<smiley<<smiley<<endl<<endl<<ps;
    system("CLS");
    cout << "\n\t 1. BOOK CAR " ;
    cout << "\n\t 2. RETURN CAR " ;
    cout << "\n\t 3. EXIT " ;

    short int ch1 ;
    cout << "\n\n\tEnter Your Choice : " ;
    cin >> ch1 ;
    system("CLS");

    switch ( ch1 )
    {
    case 1 :
        {
            Lab1 :
            cout << "\n\n\t Types of Car :------ \n\n" ;

            cout << "\n\t 1. SUV " ;
            cout << "\n\t 2. SEDAN " ;
            cout << "\n\t 3. MUV " ;
            cout << "\n\n\t 0. Exit " ;

            short int ch2 ;
            cout << "\n\n\t Enter Your Choice : " ;
            cin >> ch2 ;
            system("CLS") ;

            short int ch3 ;
            char ch4 ;
            switch ( ch2 )
            {
            case 1 :
                {
                    Lab2 :
                    char SUV[30] ;
                    fstream listSUV ;
                    listSUV.open( "ListOfSUVCars.txt" , ios::in | ios::out ) ;

                    while( 1 )
                    {
                        if( listSUV.eof() != 0 )
                        {
                            break ;
                        }

                        listSUV.getline( SUV , 30 ) ;
                        cout << "\n\n\t" << SUV ;
                    }

                    listSUV.close() ;

                    cout << "\n" ;
                    cout << "\t Enter Your Choice : " ;
                    cin >> ch3 ;

                    if ( ch3 == 0 )
                    {
                        system("CLS") ;
                        goto Lab1 ;
                    }

                    else if ( ch3 > 0 || ch3 <10 )
                    {
                        ifstream SUVobj ;
                        SUVobj.open("SUVCars.csv" , ios::in ) ;

                            int i = 0 ;
                            while( SUVobj.good() )
                            {

                                getline ( SUVobj , SUV1.CName , ',' ) ;
                                getline ( SUVobj , SUV1.Mileage , ',' ) ;
                                getline ( SUVobj , SUV1.FType , ',' ) ;
                                getline ( SUVobj , SUV1.MYear , ',' ) ;
                                getline ( SUVobj , SUV1.Engine , ',' ) ;
                                getline ( SUVobj , SUV1.Seat , ',' ) ;
                                getline ( SUVobj , SUV1.I_km ) ;


                                if( i == (ch3 - 1) )
                                {
                                    SUVobj.close();
                                    SUV1.SUVCarDetails() ;
                                    break ;
                                }
                                i++;

                            }

                            cout << "\n\n\t Have You Selected This Car ?? < Y/N > ::  ";
                            cin >> ch4 ;

                            if ( ch4 == 'Y' || ch4 == 'y' )
                            {
                                cout << "\n\n\t\t GR8 ...... " ;
                                system("CLS") ;

                                cout << "\n\n" ;
                                cout << "\n\t Enter Your Name     :  " ;
                                cin >> C_Name ;
                                cout << "\n\t Enter Your Number   :  " ;
                                cin >> C_Number ;
                                cout << "\n\t Enter Advance Money :  " ;
                                cin >> Advance ;

                                fstream SUVobj1 ;
                                SUVobj1.open("Record.csv" , ios::app) ;

                                SUVobj1 << C_Number << ',' << C_Name << ',' << Advance << ',' << "SUV" << ',' << SUV1.CName << ',' << SUV1.I_km << ',' << SUV1.Engine << ',' << SUV1.FType << ',' << SUV1.Mileage << ',' << SUV1.MYear << ',' << SUV1.Seat ;
                                SUVobj1 << "\n" ;//important to go in next line in the csv file.

                                SUVobj1.close() ;

                                system("CLS") ;
                                cout << "\n\n\n\n\n\n\t\t Thank You ... \n\n\n\n\n\n\n\n\n";
                            }

                            else
                            {
                                system("CLS") ;
                                goto Lab2;
                            }



                    }

                    else if ( ch3 >=10 || ch3 < 0 )
                    {
                        cout << "\nWrong Input ...!!!!!!";
                        cout << ps ;
                        system("CLS") ;
                        goto Lab2 ;
                    }


                }
            break ;

            case 2 :
                {
                    char Sedan[30] ;
                    fstream listSedan ;
                    listSedan.open( "ListOfSedanCars.txt" , ios::in | ios::out ) ;

                    while( 1 )
                    {
                        if( listSedan.eof() != 0 )
                        {
                            break ;
                        }

                        listSedan.getline( Sedan , 30 ) ;
                        cout << "\n\n\t" << Sedan ;
                    }

                    listSedan.close() ;

                    cout << "\n" ;
                    cout << "\t Enter Your Choice : " ;
                    cin >> ch3 ;

                    if ( ch3 == 0 )
                    {
                        system("CLS") ;
                        goto Lab1 ;
                    }

                    else if ( ch3 > 0 || ch3 <9 )
                    {
                        ifstream Sedanobj ;
                        Sedanobj.open("SedanCars.csv" , ios::in ) ;

                            int i = 0 ;
                            while( Sedanobj.good() )
                            {

                                getline ( Sedanobj , Sedan1.CName , ',' ) ;
                                getline ( Sedanobj , Sedan1.Mileage , ',' ) ;
                                getline ( Sedanobj , Sedan1.FType , ',' ) ;
                                getline ( Sedanobj , Sedan1.MYear , ',' ) ;
                                getline ( Sedanobj , Sedan1.Engine , ',' ) ;
                                getline ( Sedanobj , Sedan1.Seat , ',' ) ;
                                getline ( Sedanobj , Sedan1.I_km ) ;


                                if( i == (ch3 - 1) )
                                {
                                    Sedanobj.close();
                                    Sedan1.SedanCarDetails() ;
                                    break ;
                                }
                                i++;

                            }

                            cout << "\n\n\t Have You Selected This Car ?? < Y/N > ::  ";
                            cin >> ch4 ;

                            if ( ch4 == 'Y' || ch4 == 'y' )
                            {
                                cout << "\n\n\t\t GR8 ...... " ;
                                system("CLS") ;

                                cout << "\n\n" ;
                                cout << "\n\t Enter Your Name     :  " ;
                                cin >> C_Name ;
                                cout << "\n\t Enter Your Number   :  " ;
                                cin >> C_Number ;
                                cout << "\n\t Enter Advance Money :  " ;
                                cin >> Advance ;

                                fstream Sedanobj1 ;
                                Sedanobj1.open("Record.csv" , ios::app) ;

                                Sedanobj1 << C_Number << ',' << C_Name << ',' << Advance << ',' << "Sedan" << ',' << Sedan1.CName << ',' << Sedan1.I_km << ',' << Sedan1.Engine << ',' << Sedan1.FType << ',' << Sedan1.Mileage << ',' << Sedan1.MYear << ',' << Sedan1.Seat ;
                                Sedanobj1 << "\n" ;

                                Sedanobj1.close() ;

                                system("CLS") ;
                                cout << "\n\n\n\n\n\n\t\t Thank You ... \n\n\n\n\n\n\n\n\n";
                            }

                            else
                            {
                                system("CLS") ;
                                goto Lab2;
                            }



                    }

                    else if ( ch3 >=9 || ch3 < 0 )
                    {
                        cout << "\nWrong Input ...!!!!!!";
                        cout << ps ;
                        system("CLS") ;
                        goto Lab2 ;
                    }


                }
            break ;

            case 3 :
                {
                    char MUV[30] ;
                    fstream listMUV ;
                    listMUV.open( "ListOfMUVCars.txt" , ios::in | ios::out ) ;

                    while( 1 )
                    {
                        if( listMUV.eof() != 0 )
                        {
                            break ;
                        }

                        listMUV.getline( MUV , 30 ) ;
                        cout << "\n\n\t" << MUV ;
                    }

                    listMUV.close() ;

                    cout << "\n\n" ;
                    cout << "\n\t Enter Your Choice : " ;
                    cin >> ch3 ;

                    if ( ch3 == 0 )
                    {
                        system("CLS") ;
                        goto Lab1 ;
                    }

                    else if ( ch3 > 0 || ch3 <6 )
                    {
                        ifstream MUVobj ;
                        MUVobj.open("MUVCars.csv" , ios::in ) ;

                            int i = 0 ;
                            while( MUVobj.good() )
                            {

                                getline ( MUVobj , MUV1.CName , ',' ) ;
                                getline ( MUVobj , MUV1.Mileage , ',' ) ;
                                getline ( MUVobj , MUV1.FType , ',' ) ;
                                getline ( MUVobj , MUV1.MYear , ',' ) ;
                                getline ( MUVobj , MUV1.Engine , ',' ) ;
                                getline ( MUVobj , MUV1.Seat , ',' ) ;
                                getline ( MUVobj , MUV1.I_km ) ;


                                if( i == (ch3 - 1) )
                                {
                                    MUVobj.close();
                                    MUV1.MUVCarDetails() ;
                                    break ;
                                }
                                i++;

                            }

                            cout << "\n\n\t Have You Selected This Car ?? < Y/N > ::  ";
                            cin >> ch4 ;

                            if ( ch4 == 'Y' || ch4 == 'y' )
                            {
                                cout << "\n\n\t\t GR8 ...... " ;
                                system("CLS") ;

                                cout << "\n\n" ;
                                cout << "\n\t Enter Your Name     :  " ;
                                cin >> C_Name ;
                                cout << "\n\t Enter Your Number   :  " ;
                                cin >> C_Number ;
                                cout << "\n\t Enter Advance Money :  " ;
                                cin >> Advance ;

                                fstream MUVobj1 ;
                                MUVobj1.open("Record.csv" , ios::app) ;

                                MUVobj1 << C_Number << ',' << C_Name << ',' << Advance << ',' << "MUV" << ',' << MUV1.CName << ',' << MUV1.I_km << ',' << MUV1.Engine << ',' << MUV1.FType << ',' << MUV1.Mileage << ',' << MUV1.MYear << ',' << MUV1.Seat ;
                                MUVobj1 << "\n" ;

                                MUVobj1.close() ;

                                system("CLS") ;
                                cout << "\n\n\n\n\n\n\t\t Thank You ... \n\n\n\n\n\n\n\n\n";
                            }

                            else
                            {
                                system("CLS") ;
                                goto Lab2;
                            }



                    }

                    else if ( ch3 >=6 || ch3 < 0 )
                    {
                        cout << "\nWrong Input ...!!!!!!";
                        cout << ps ;
                        system("CLS") ;
                        goto Lab2 ;
                    }

                }
            break ;

            case 0 :
                {
                    exit(1) ;
                }
            break ;

            default :
                {
                    system("CLS") ;
                    goto Lab1 ;
                }
            }



        }
        break ;

            case 2 :
                {
                    string M_Number , Type;
                    cout << "\n\n" ;

                    cout << "\n\t Enter Mobile Number :: " ;
                    cin >> M_Number ;

                    fstream Return ;
                    Return.open("Record.csv" , ios::in ) ;
                    int i=0 ;
                    while( Return.good() )
                            {
                                getline ( Return , C_Number , ',' ) ;
                                getline ( Return , C_Name , ',' ) ;
                                getline ( Return , Advance , ',' ) ;
                                getline ( Return , Type , ',' ) ;
                                getline ( Return , Car1.CName , ',' ) ;
                                getline ( Return , Car1.I_km , ',') ;
                                getline ( Return , Car1.Engine , ',' ) ;
                                getline ( Return , Car1.FType , ',' ) ;
                                getline ( Return , Car1.Mileage , ',' ) ;
                                getline ( Return , Car1.MYear , ',' ) ;
                                getline ( Return , Car1.Seat ) ;



                                if( M_Number == C_Number )
                                {
                                    long int ikm = 0 , fkm , adv  ;
                                    cout << "\n\n\t Car Details : --- " ;
                                    cout << "\n\n" ;

                                    cout << "\n\t Customer's Name   :: " << C_Name ;
                                    cout << "\n\t Customer's Number :: " << C_Number ;
                                    cout << "\n\t Car Type          :: " << Type ;
                                    cout << "\n\t Car Name          :: " << Car1.CName ;
                                    cout << "\n\t Initial Km        :: " << Car1.I_km ;
                                    cout << "\n\t Advance           :: " << Advance ;

                                    cout << "\n\n\n" ;

                                     stringstream geek(Car1.I_km) ;
                                    geek >> ikm ;

                                    while(fkm>ikm)
                   {
                       cout << "\n\t Enter Final Km :: " ;
                                    cin >> fkm ;

                    if(fkm<ikm)
                   {
                    cout<<"\nEnter final km greater than initial km"<<ikm;
                   }

                    }
                                    cout << "\n\t Enter Final Km :: " ;
                                    cin >> fkm ;


                                    stringstream keep(Advance) ;
                                    keep >> adv ;

                                    Car1.Bill(C_Name , C_Number , Type , Car1.CName , fkm , ikm , adv ) ;
                                }


                            }

                }
    }

    return 0 ;
}
