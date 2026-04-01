// fragment_shader.glsl
#version 330 core
in vec3 vColor;
out vec4 FragColor;

void main() {
    // Standard GL_POINTS are squares by default unless GL_POINT_SMOOTH is on
    FragColor = vec4(vColor, 1.0);
}
