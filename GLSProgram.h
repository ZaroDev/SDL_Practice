#pragma once

#include <string>
#include <glew.h>
class GLSProgram
{
public:
	GLSProgram();
	~GLSProgram();

	void compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentsShaderFilePath);
	void linkShaders();
	void addAttribute(const std::string& attributeName);
	void use();
	void unUse();

private:

	void compileShader(const std::string& filePath, GLuint id);

	int _numAttributes;

	GLuint _programID;
	GLuint _vertexShaderID;
	GLuint _fragmentShaderID;

};

