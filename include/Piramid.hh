#include "Scene_object.hh"

class Piramid : public Scene_object {

    public:

    Piramid(PzG::LaczeDoGNUPlota &Lacze,Vector3 begin_position, Vector3 scale){
        static int count2 = 1;
        std::string stream2 = "../dat/gora_z_ostrym_szczytem" + std::to_string(count2) + ".dat"; 
        char *strm2 = new char[stream2.size() + 1];
        strcpy(strm2, stream2.c_str());

        std::string stream3 = "Piramid" + std::to_string(count2); 
        char *strm3 = new char[stream2.size() + 1];
        strcpy(strm3, stream3.c_str());

        Lacze.DodajNazwePliku(strm2);
        this->set_name_of_file(strm2);
        this->set_name(strm3);
        this->set_mid(begin_position);
        count2 += 1;
        this->set_obst(Init_The_Obstacle("../bryly_wzorcowe/gora_z_dluga_grania.dat",strm2,NOPOINTS,scale,begin_position,'2'));
    };

    

};