#include "Scene_object.hh"

class Mount_with_ridge : public Scene_object {

    public:

    Mount_with_ridge(PzG::LaczeDoGNUPlota &Lacze,Vector3 begin_position, Vector3 scale){
        static int count1 = 1;
        std::string stream1 = "../dat/gora_z_dluga_grania" + std::to_string(count1) + ".dat"; 
        char *strm1 = new char[stream1.size() + 1];
        strcpy(strm1, stream1.c_str());

        std::string stream2 = "Mount with ridge" + std::to_string(count1); 
        char *strm2 = new char[stream2.size() + 1];
        strcpy(strm2, stream2.c_str());

        Lacze.DodajNazwePliku(strm1);
        this->set_name_of_file(strm1);
        this->set_name(strm2);
        this->set_mid(begin_position);
        count1 += 1;
        this->set_obst(Init_The_Obstacle("../bryly_wzorcowe/gora_z_dluga_grania.dat",strm1,NOPOINTS,scale,begin_position,'1'));
    };
};