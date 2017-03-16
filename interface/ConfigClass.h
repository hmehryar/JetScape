/*******************************************************************************

This is the class that holds the configuration information and parameters to run
Jetscape. This class will be built up as different modules require different 
parameters. Members set to public since modules will be reading these parameters

*******************************************************************************/

class Config {
 public :
  Config(){};
  ~Config(){};
  int randomNumberSeed = 0; //for random number generators for reproducible runs
  int comEnergy ; //
}

void readYamlConfig(string filename)
{
  // to be implemented, read yaml filename and set parameters
}

void readTxtConfig(string filename)
{
  // to be implemented, read config from a simple text file and set parameters
}

void readXmlConfig(string filename)
{
  // to be implemented, read a xml file and set parameters
}
