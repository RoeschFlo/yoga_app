#ifndef WORKOUT_FILE_HANDLER_H
#define WORKOUT_FILE_HANDLER_H


#include <vector>
#include <string>
#include <input_boxes.h>


struct Single_exercise{
    std::string name;
    int duration_in_sec;
    // std::string path_to_picture;
};



class Workout_file_handler
{
public:
    Workout_file_handler();

    //std::vector<Complete_workout> complete_workout;
    //std::vector<complete_workout_test> test_vector;
    std::string path_to_workout_exercise_pool;




    void add_or_modify_exercise(const std::string& filename);
    void TEST_show_exercise_list();

private:
    bool fileExists(const std::string& filename);

};

#endif // WORKOUT_FILE_HANDLER_H
