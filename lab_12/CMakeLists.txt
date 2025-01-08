set(NUM_EXERCISES 8)

get_filename_component(LAB_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
generate_exercise_list(${NUM_EXERCISES} EXERCISE_NUMBERS)

foreach(EXERCISE_NUMBER IN LISTS EXERCISE_NUMBERS)
    add_executable(${LAB_NAME}_zad_${EXERCISE_NUMBER} zad_${EXERCISE_NUMBER}.cpp)
endforeach()
