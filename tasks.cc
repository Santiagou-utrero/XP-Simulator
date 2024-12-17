#include <iostream>
#include <fstream>
#include <string>
#include "tasks.h"
#include "xpLogic.h"


Note CreateNote(){
    Note note;
    std::cout << "Ingresa el nombre de la nota:\n";
    std::cin >> note.name;
    std::cout << "Ahora ingresa el autor de la nota:\n";
    std::cin >> note.author;
    std::cout << "Por ultimo ingresa el texto de la nota:\n";
    std::cin.ignore();
    std::getline(std::cin, note.text);

    return note;
}

void add_note_to_file(const Note& note, const std::string& filename){
    std::ofstream file(filename, std::ios::app);
    if (file.is_open())
    {
        file << "Nombre: " << note.name << ", Autor: " << note.author << ", Texto: " << note.text << std::endl;
    } else{
        std::cerr << "error al crear la nota\n";
    }
    
}

void create_complex_note(){
    std::string filename = "notas complejas.txt";
    char option;

        std::cout << "Buenas, quieres crear una nueva nota compleja (s/n):\n";
        std::cin >> option;

        if (option == 's' || option == 'S')
        {
            Note mynote = CreateNote();
            add_note_to_file(mynote, filename);

        }
}