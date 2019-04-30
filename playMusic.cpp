 #include "music.h"
 #include "stack.h"
 #include "pop.cpp"
 #include "push.cpp"
 #include "destroy.cpp"
 void playMusic(MusicElement music[], double tempo, int LastNote)
{
    STACK stack; Play type; int current =0; int finish = LastNote;
    while(true)
    {
        type = music[current].type;
        if(type == Stop or current > finish) break;
        //else if(not IsEmpty(stack))
        {
        }
        if(type == Playnote)
        {
            std::cout<<"play"<<note[music[current].note.tone]
            <<"for"<<music[current].note.duration <<"counts."
            <<std::endl;
            std::string s ="play -qn synth 1 pluck ";
            std::ostringstream oss;
            oss << note[music[current].note.tone];
            system((s + oss.str()).c_str());
            current++;
        }
        else if(type == Playfragment)
        {
        push(stack,current+1);
        push(stack,music[current].fragment.finish);
        //else {break};
        
        finish = music[current].fragment.finish;
        current = music[current].fragment.start;
    }
    }
    if(not isEmpty(stack)){
        pop(stack, finish); pop(stack, current);
    }
    //else{ break};
   destroy(stack);
    
}
