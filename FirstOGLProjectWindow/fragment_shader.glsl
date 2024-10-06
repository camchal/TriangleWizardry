#version 330 core
out vec4 FragColor;
uniform float cScale;

void main()
{
    FragColor = vec4(cScale * 1.0f, cScale * 0.5f, cScale * 0.2f, 1.0f);
}