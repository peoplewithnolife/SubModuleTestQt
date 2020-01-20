#include <QCoreApplication>

#include <iostream>
using namespace std;

#include "TestCalc.h"
#include "Source/Weather.h"
#include "Source/Lib001_Convert/ConvertNk.h"
#include "Source/Lib001_Impeller/ImpellerNk.h"

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);

   cout << "Get a job\n";

   float dork;
   float dorkLocal;
   float dorkF;
   float nSpins;
   float distMeters;

   dork = TestCalc(25.3);

   cout << "NewValue is: " << dork << "\n";
   dorkLocal = LocalAdjust(dork);
   cout << "Local Adjustment is: " << dorkLocal << "\n";
   dorkF = ConvCtoF(dorkLocal);
   cout << "In C: " << dorkF << "\n";

   nSpins = 10000.0;
   distMeters = ImpDistFromSpins(nSpins);

   cout << "N Spins: " << nSpins << " Is " << distMeters << " Meters" << "\n";
   //return a.exit(0);
   //a.exit(1);

   //return a.exec();
   return 0;
}
