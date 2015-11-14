#include <GL/glew.h>

#include "libraries/LoadObject.h"
#include "libraries/VectorUtils3.h"

GLuint fullProgram;

void initializeFullShader(GLuint texUnit);
void drawFull(Model* m, mat4 modelViewProjectionTransform, mat4 shadowMapTransform, mat4 modelTransform, GLfloat shade);