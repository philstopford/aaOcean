#ifndef AAOCEANFOAM_H
#define AAOCEANFOAM_H

#include <shader.h>
#include <geoshader.h>

typedef struct
{
	miVector	uv_coords;
	miScalar	gamma;
	miScalar	brightness;
	miScalar	fade;
	miBoolean	rawOutput;
	
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
	miScalar	fmin;
	miScalar	fmax;

} aaOceanFoamShader_t;

#endif // AAOCEANFOAM_H
