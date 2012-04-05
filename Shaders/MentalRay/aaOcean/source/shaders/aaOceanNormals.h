// C Header File Generated by Softimage Shader Wizard

#ifndef AAOCEANNormals_H
#define AAOCEANNormals_H
#if (_MSC_VER > 1000)
#pragma once
#endif

////////////////////////////////////////////////////////////////
// Type definition

typedef struct
{
	miVector	uv_coords;
	miScalar	fade;
	
	miInteger	resolution;
	miScalar	oceanScale;
	miInteger	seed;
	miScalar	waveHeight;
	miScalar	velocity;
	miScalar	waveSpeed;
	miScalar	chopAmount;
	miScalar	cutoff;
	miScalar	windDir;
	miScalar	damp;
	miInteger	windAlign;

	miScalar	time;
	miVector	layerNormals;

} aaOceanNormalsShader_t;

#endif // AAOCEANNormals_H
