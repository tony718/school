#include <iostream>
using namespace std;


/*prototypes for the function needs to be embedded before
  main code.*/

int NumTiles (double LenRoom, double WidthOfRoom,
        double LenTile, double WidthTile);

int NumTiles (double LenRoom, double WidthRoom);

int NumBox (int NumTiles, int NuBoxSize);

int main(){

    int tiles = 0;
    tiles = NumTiles(10.0,10.0);
    cout << " Number of tiles are : " << tiles << endl;
    cout << " Number of boxes required is " << NumBox(tiles,4) << endl;    
    tiles = NumTiles(10.0,10.0,1,1);
    cout << " Number of tiles are : " << tiles << endl;
    cout << " Number of boxes required is " << NumBox(tiles,4) << endl;    
    tiles = NumTiles(10.0,10.0,2,2);
    cout << " Number of tiles are : " << tiles << endl;
    cout << " Number of boxes required is " << NumBox(tiles,4) << endl;    
    tiles = NumTiles(10.0,10.0,.25,.25);
    cout << " Number of tiles are : " << tiles << endl;
    cout << " Number of boxes required is " << NumBox(tiles,4) << endl;
    tiles = NumTiles(10.0,10.0,9,4);
    cout << " Number of tiles are : " << tiles << endl;
    cout << " Number of boxes required is " << NumBox(tiles,4) << endl;


    return 0;
}
int NumTiles (double LenRoom, double WidthOfRoom,
        double LenTile, double WidthTile)
{return static_cast<int> ((LenRoom*WidthOfRoom)/(LenTile*WidthTile));
}

int NumTiles (double LenRoom, double WidthRoom)
{return static_cast<int>(NumTiles(LenRoom, WidthRoom,1,1));
}

int NumBox (int NumTiles, int NumBoxSize)
{ int box;
    box = NumTiles/NumBoxSize;
    if( NumTiles%NumBoxSize != 0 )
        box = box+1;
    return box;}

