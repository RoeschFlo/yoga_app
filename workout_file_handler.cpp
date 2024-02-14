#include "workout_file_handler.h"
//möglichst wenig header includieren
#ifdef _WIN32
#include <io.h>
#define access    _access_s
#else
#include <unistd.h>
#endif

#include <iostream>
#include <fstream>
#include <input_boxes.h>

Workout_file_handler::Workout_file_handler() {





}

bool Workout_file_handler::fileExists(const std::string &filename)
{
    return access(filename.c_str(), 0) == 0;
}

// Funktion zum Speichern und Editieren von Übungen
void Workout_file_handler::add_or_modify_exercise(const std::string& filename )
{
    // if (!fileExists(filename);){
    //     std::fstream MyFile(filename);
    // }


}
