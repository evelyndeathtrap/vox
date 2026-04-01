#include <GL/glew.h>
#include <GLFW/glfw3.h>

typedef struct {
    float x, y, z;
    float r, g, b;
} Voxel;

// ... Inside your rendering loop ...

void renderVoxels(GLuint vao, int voxelCount, GLuint shaderProgram) {
    glUseProgram(shaderProgram);
    
    // Enable point size control in shader
    glEnable(GL_PROGRAM_POINT_SIZE);
    
    // If you want voxels to feel solid, enable depth testing
    glEnable(GL_DEPTH_TEST);

    glBindVertexArray(vao);
    
    // Set your uniforms (MVP matrices)
    // glUniformMatrix4fv(...);
    glUniform1f(glGetUniformLocation(shaderProgram, "voxelSize"), 0.1f);

    glDrawArrays(GL_POINTS, 0, voxelCount);
}
