#pragma once
#include "BufferCPU.h"
#include "BufferGPU.h"
#include "VertexColor.h"

class Mesh
{
public:
	// Mesh data
	BufferCPU* vertexDataCPU;
	BufferGPU* vertexDataGPU;
	BufferCPU* indexDataCPU;
	BufferGPU* indexDataGPU;

	Mesh(VertexColor* vertList, int numVerts);
	Mesh(char* file, bool tangents);
	~Mesh();

	int numIndices;
	void LoadBasic(char* file);
	void LoadTangents(char* file);
};

