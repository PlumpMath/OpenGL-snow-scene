/**
 * Move the camera around based on keyboard input.
 */
vec3 moveCameraOnKeyboard(vec3 in, vec3 cameraNormal, vec3 cameraDirection);


/**
 * Introduce a camera shake with the specified magnitude.
 */
vec3 smoothRandomMovement(vec3 in, float magnitude);

void initCamera();

void handleMouse(int x, int y);

void reshape(GLsizei w, GLsizei h);

mat4 getProjectionViewMatrix();

vec3 getCameraPos();