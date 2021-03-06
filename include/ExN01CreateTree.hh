#ifndef CreateTree_H
#define CreateTree_H 1


//#include <vector>
//#include <map>
#include <iostream>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#include "TRandom3.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TTree.h"

#pragma GCC diagnostic pop



class CreateTree
{
private:
  
  TTree*  ftree ;
  TString fname ;
  
public:
  
  CreateTree (TString name);

  
  ~CreateTree () ;
  
  
  TTree*             GetTree  () const { return ftree ; } ;
  TString            GetName  () const { return fname ; } ;

  int                Fill     () ;
  void               Write    (TFile *) ;
  void               Clear    () ;
  static CreateTree* Instance () { return fInstance ; } ;
  static CreateTree* fInstance ;

  
  int   Event ;

  float sensorE;

  float EnergyInTrans[1000];

  int radiusBin[1000];
} ;

#endif
