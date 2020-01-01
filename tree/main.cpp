#include <iostream>

using namespace std;

int main()
{

     cout <<"\n" ;

    for (int i =  1 ; i <= 9 ; i++){
        for ( int sp = 20 ; sp >=i ; sp -=1 )
            cout <<" ";
        for (int j = 1 ; j <= i ; j ++ )
            cout <<" #";
        cout <<endl;
    }
    for ( int k = 7 ; k <= 12 ; k ++){
        for ( int sp2 =20 ; sp2 >= k ; sp2 -- )
            cout<<" ";
        for ( int m = 1 ; m <= k  ; m++ )
            cout <<" #";
        cout <<endl;
    }
    for ( int f = 13 ; f <= 18 ; f++ ){
         for ( int sp3 =30 ; sp3 >=11  ; sp3 -- )
            cout<<" ";
    for ( int y = 1 ; y <=2 ; y ++)
        cout <<"##";
        cout<<endl;
    }



    return 0;
}
