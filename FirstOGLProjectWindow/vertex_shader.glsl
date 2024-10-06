#version 330 core
layout (location = 0) in vec3 aPos;
uniform float gScale;

void main()
{
   gl_Position = vec4(gScale * aPos.x, gScale * aPos.y, aPos.z, 1.0);
}