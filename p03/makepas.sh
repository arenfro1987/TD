rm basic 
rm paslex.cpp
rm paspar.cpp
rm y.output
rm *.o
rm *.trc
rm y.tab.h

make -f pasMakeFile

./pas p007_000.pas 
./pas p070_000.pas
./pas p008_000.pas
./pas p014_000.pas 
nano  p007_000.trc
