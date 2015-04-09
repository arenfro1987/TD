#ifndef paslex_h
#define paslex_h 1
//--------------------------------------------------------------------
// File paslex.h defines class Lexer.  
//--------------------------------------------------------------------
// Author: Thomas R. Turner                                           
// E-Mail: trturner.ucok.edu                                          
// Date:   January, 2009                                              
//--------------------------------------------------------------------
// Copyright January, 2009 by Thomas R. Turner
// Do not reproduce without permission from Thomas R. Turner.
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Standard C and C++ include files                                        
//--------------------------------------------------------------------
#include <cstdio>
#include <fstream>
#include <iostream>
//--------------------------------------------------------------------
//Namespaces
//--------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//Function: yylex                                                     
//Function yylex is the pasner.  Function yylex returns an integer   
//token code as defined above or 0 if end-of-file has been     
//reached.                                                            
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C" 
#endif
int yylex (void);
//--------------------------------------------------------------------
//Class Lexer defines the attributes of a Scanner
//--------------------------------------------------------------------
class Lexer {
public:
  Lexer(FILE* i);                //Constructor used to redirect the keyboard
                                 //(stdin) to file i.
  int Lex(void);                 //Call the scanner yylex and return the code
};
#endif
