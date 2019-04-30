#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
const std::string note = "CCGGAAGGFFEEDDCCGGFFEEDDGGFFEEDD";
struct Note {int tone; int duration;};
struct Fragment {int start; int finish;};
enum Play{Playnote, Playfragment, Stop};
struct MusicElement{ Play type; union{ Note note; Fragment fragment;};};
void  playMusic(MusicElement music[], double tempo, int LastNote);
