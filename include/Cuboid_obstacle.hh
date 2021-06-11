#include "Scene_object.hh"
class Cuboid_obstacle : public Scene_object{

    public:

    Cuboid_obstacle(PzG::LaczeDoGNUPlota &Lacze,Vector3 begin_position, Vector3 scale){
        static int count3 = 1;
        std::string stream3 = "../dat/plaskowyz" + std::to_string(count3) + ".dat"; 
        char *strm3 = new char[stream3.size() + 1];
        strcpy(strm3, stream3.c_str());

        std::string stream2 = "Cuboid";

        Lacze.DodajNazwePliku(strm3);
        count3 += 1;
        this->set_name_of_file(strm3);
        this->set_name(stream2);
        this->set_mid(begin_position);
        count3 += 1;
        this->set_obst(Init_The_Obstacle("../bryly_wzorcowe/plaskowyz.dat",strm3,NOPOINTS,scale,begin_position,'3'));
    };
};