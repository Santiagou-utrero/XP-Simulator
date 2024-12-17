#ifndef TASKS_H
#define TASKS_H

#include <string>

struct Note
{
    std::string name;
    std::string author;
    std::string text;
};

Note CreateNote();
void add_note_to_file(const Note& note, const std::string& filename);
void create_complex_note();


#endif