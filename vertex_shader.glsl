// vertex_shader.glsl
#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform float voxelSize;

out vec3 vColor;

void main() {
    gl_Position = projection * view * model * vec4(aPos, 1.0);
    
    // Adjust point size based on distance to simulate perspective blocks
    float dist = length(gl_Position.xyz);
    gl_PointSize = (voxelSize * 1000.0) / dist; 
    
    vColor = aColor;
}
