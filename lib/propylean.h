#ifndef PROPYLEAN
#define PROPYLEAN

#include <string>
#include <vector>

// PROPERTY CLASSES START
class Properties{
  float value;
  std::string unit;

  public:
    Properties(float value = NULL, std::string unit = NULL);
    virtual void set_value(float value = NULL);
    virtual void set_unit(std::string = NULL);
    
};

class Pressure : public Properties{
    public:
    void set_value(float value =0);
    void set_unit(std::string = "Pa");
}

class Temperature : public Properties{
    public:
    void set_value(float value =0);
    void set_unit(std::string = "K");
}

class MassFlowRate : public Properties{
    public:
    void set_value(float value =0);
    void set_unit(std::string = "kg/s");
}

class VolumetricFlowRate : public Properties{
    public:
    void set_value(float value =0);
    void set_unit(std::string = "m^3/s");
}

class Power : public Properties{
    public:
    void set_value(float value =0);
    void set_unit(std::string = "W");
}
//PROPERTY CLASSES END

//STREAM CLASSES START
class EnergyStream{
  Power P;
  
}
#endif