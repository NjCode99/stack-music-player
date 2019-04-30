#include "music.h"
const double tempo =1.2;
MusicElement music[] = {
    {Playnote,{0,8}},
    {Playnote,{1,8}},
    {Playnote,{2,8}},
    {Playnote,{3,8}},
    {Playnote,{4,8}},
    {Playnote,{5,8}},
    {Playnote,{6,8}},
    {Playnote,{7,8}},
    {Playnote,{8,8}},
    {Playnote,{9,8}},
    {Playnote,{10,8}},
    {Playnote,{11,8}},
    {Playnote,{12,8}},
    {Playnote,{13,8}},
    {Playnote,{14,8}},
    {Playnote,{15,8}},
    {Playnote,{16,8}},
    {Playnote,{17,8}},
    {Playnote,{18,8}},
    {Playnote,{19,8}},
    {Playnote,{20,8}},
    {Playnote,{21,8}},
    {Playnote,{22,8}},
    {Playnote,{23,8}},
    {Playnote,{24,8}},
    {Playnote,{25,8}},
    {Playnote,{26,8}},
    {Playnote,{27,8}},
    {Playnote,{28,8}},
    {Playnote,{29,8}},
    {Playnote,{30,8}},
    {Playnote,{31,8}},
    {Playfragment,{0,14}},
    {Stop,{0,0}}
};
const int LastNote = sizeof(music)/sizeof(MusicElement);
int main()
{
    std::cout<<"Twinkle Twinkle Little Star"<<std::endl;
    playMusic(music,tempo,LastNote);
}
