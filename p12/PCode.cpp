//-------------------------------------------------------------------------
//File PCode_h defines class PCode.
//-------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@uco.edu
//February, 2012
//-------------------------------------------------------------------------
//Copyright: February, 2012 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//-------------------------------------------------------------------------
//C++ include files
//-------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;
//-------------------------------------------------------------------------
//Application include files
//-------------------------------------------------------------------------
#include "String.h"
#include "PCode.h"
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
PCode::PCode(string l,string o,string r1,string r2)
:label(l),op(o),rand1(r1),rand2(r2){}
PCode::PCode(string l,string o,string r1,int r2)
:label(l),op(o),rand1(r1){rand2=String(r2);}
PCode::PCode(string l,string o,int r1,int r2)
:label(l),op(o){rand1=String(r1);rand2=String(r2);}
PCode::PCode(string l,string o,int r1,string r2)
:label(l),op(o),rand2(r2){rand1=String(r1);}
string PCode::Label(void){return label;}
string PCode::Op(void){return op;}
string PCode::Rand1(void){return rand1;}
string PCode::Rand2(void){return rand2;}
void PCode::StoreLabel(string l){label=l;}
void PCode::StoreOp(string o){op=o;}
void PCode::StoreRand1(string r1){rand1=r1;}
void PCode::StoreRand2(string r2){rand2=r2;}
void PCode::Print(ostream& o)
{   if (op=="arg") return;
    o << endl;
    o << setw(10) << left << label;
    o << setw(10) << left << op;
    o << setw(10) << left << rand1;
    o << setw(10) << left << rand2;
    o << endl;
}
