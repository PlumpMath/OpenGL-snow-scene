add_library ( GLUtilities	GLUtilities.c )
add_library ( VectorUtils3 VectorUtils3.c )
add_library ( LoadObject LoadObject.c )
target_link_libraries( LoadObject m )
add_library ( LoadTGA LoadTGA.c )