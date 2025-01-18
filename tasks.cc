#include <iostream>
#include <fstream>
#include <string>
#include "tasks.h"
#include "xpLogic.h"


Note CreateNote(){
    Note note;
    std::cout << "Enter the note name:\n";
    std::cin >> note.name;
    std::cout << "Enter the autor name of the note:\n";
    std::cin >> note.author;
    std::cout << "Last one, enter the text of the note:\n";
    std::cin.ignore();
    std::getline(std::cin, note.text);

    return note;
}

void add_note_to_file(const Note& note, const std::string& filename){
    std::ofstream file(filename, std::ios::app);
    if (file.is_open())
    {
        file << "Name: " << note.name << ", Autor: " << note.author << ", Text: " << note.text << std::endl;
    } else{
        std::cerr << "error while creating the note\n";
    }
    
}

void create_complex_note(){
    std::string filename = "notas complejas.txt";
    char option;

        std::cout << "Hi, do you want to create a complex note? (y/n):\n";
        std::cin >> option;

        if (option == 'y' || option == 'Y')
        {
            Note mynote = CreateNote();
            add_note_to_file(mynote, filename);

        }
}